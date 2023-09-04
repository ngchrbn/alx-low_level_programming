#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX std output.
 * @filename: Text file to be read
 * @letters: Number of letters it should read and print
 * If write fails or does not write the expected amount
 * Return: 0 if filename is NULL or write fails
 * or does not write the expected amount
 * otherwise actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, bytes_read, bytes_wrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
		return (0);

	bytes_wrote = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_wrote == -1 || bytes_wrote != bytes_read)
	{
		free(buffer);
		return (0);
	}


	free(buffer);
	close(fd);
	return (bytes_read);
}
