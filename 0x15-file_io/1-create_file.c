#include "main.h"
#include <sys/stat.h>

/**
 * _strlen - Get the length of a string.
 * @s: String to check.
 * Return: Length of the string.
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * create_file - Creates a file.
 * @filename: Name of the file to create
 * @text_content: A NULL terminated string to write to the file.
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if text_content is NULL create an empty file
 * Return: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, _strlen(text_content));
		if (bytes_written == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
