#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied.
 * Return: NULL if str is NULL or if insufficient memory was available,
 * otherwise pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *buffer;
	int len, j;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	buffer = malloc((len + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);

	for (j = 0; j < len; j++)
		buffer[j] = str[j];

	buffer[j] = '\0';
	return (buffer);
}
