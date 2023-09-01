#include "main.h"

/**
 * get_bit - Returns the value of a bit at given index.
 * @n: integer to be traversed
 * @index: index to be searched, starting from 0 of the bit
 * Return: Value of the bit at index index or -1 if fails.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	return ((n >> index) & 1);
}
