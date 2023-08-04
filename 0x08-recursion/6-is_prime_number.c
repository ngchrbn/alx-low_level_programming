#include "main.h"

/**
 * is_prime_helper - Helper function for is_prime_number
 * @n: number
 * @i: integer
 * Return: 1 if n is prime, otherwise returns 0
*/

int is_prime_helper(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	return (is_prime_helper(n, i - 1));
}

/**
 * is_prime_number - Checks if a given number if a prime number
 * @n: number to be checked
 * Return: 1 if the input is a prime number, otherwise return 0.
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, n - 1));
}
