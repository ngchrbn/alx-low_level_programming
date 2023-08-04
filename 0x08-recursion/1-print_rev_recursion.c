#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: pointer to string.
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
	}

	if (*s != '\0')
		_putchar(*s);
}
