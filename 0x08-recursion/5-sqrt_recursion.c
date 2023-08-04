#include "main.h"

/**
 * sqrt_recursion_helper - Checks for sqrt
 * @n: num.
 * @c: number to be divided by.
 * Return: root of the number
*/

int sqrt_recursion_helper(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + sqrt_recursion_helper(n, c + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: number to be processed
 * Return: square root of n.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (sqrt_recursion_helper(n, 2));
}
