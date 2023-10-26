#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Integer to be used
 * @index: index to be used, starting from 0
 * Return: 1 if success, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);
	*n |= (1 << index);
	return (1);
}
