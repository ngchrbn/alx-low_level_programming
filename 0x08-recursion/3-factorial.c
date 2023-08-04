#include "main.h"

/**
 * factorial - Get number's factorial
 * @n: integer to be processed
 * Return: number's factorial
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
