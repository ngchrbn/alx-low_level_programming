#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Integer to be used.
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if success, or -1 if it fails
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}