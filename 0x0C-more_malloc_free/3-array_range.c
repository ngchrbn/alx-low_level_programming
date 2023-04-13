#include <stdlib.h>

/**
 * array_range - creates an array of integers ordered from min to max.
 * @min: minimum value
 * @max: maximum value
 * Return: NULL if min > max or malloc fails,
 * otherwise pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *res;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	res = malloc(sizeof(int) * len);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		res[i] = min + i;

	return (res);
}
