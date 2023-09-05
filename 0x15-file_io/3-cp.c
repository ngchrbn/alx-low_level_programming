#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024


/**
 * check_num_args - check if the number of arguments is correct
 * @argc: number of arguments
 * Return: void
*/

void check_num_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_file_from - check if file_from exist, or can be read
 * @argv: arguments
 * Return: void
*/

void check_file_from(char *argv[])
{
	int fd_from;

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close(fd_from);
}

/**
 * check_file_to - check if file_to can be created or write
 * @argv: arguments
 * Return: void
*/

void check_file_to(char *argv[])
{
	int fd_to;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close(fd_to);
}

/**
 * check_file_descriptor - check if file descriptor can be closed
 * @fd: file descriptor
 * Return: void
*/

void check_file_descriptor(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	check_num_args(argc);

	check_file_from(argv);

	check_file_to(argv);

	fd_from = open(argv[1], O_RDONLY);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	check_file_descriptor(fd_from);

	check_file_descriptor(fd_to);

	return (0);
}
