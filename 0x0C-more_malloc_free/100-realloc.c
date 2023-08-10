#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated with a call to malloc.
 * @old_size: size, in bytes, of the allocated space for ptr.
 * @new_size: new size, in bytes of the new memory block.
 * Return: ptr if new_size == old_size,
 * NULL if new_size == 0 and ptr != NULL,
 * pointer to the newly allocated memory, NULL if it fails.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *res;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		res = malloc(new_size);
		if (res == NULL)
			return (NULL);

		return (res);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	res = malloc(new_size);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		res[i] = ((char *)ptr)[i];

	free(ptr);
	return (res);
}
