#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: char to initialize the array with.
 * Return: NULL if size = 0 or if it fails, otherwise a pointer to the array.
*/

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if (size == 0)
		return (NULL);
	buffer = malloc(size * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		buffer[i] = c;
	return (buffer);
}
