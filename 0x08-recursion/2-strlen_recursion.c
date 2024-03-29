#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: string to be checked
 * Return: len of the string
*/

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen_recursion(++s));
}
