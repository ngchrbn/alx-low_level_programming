#include "main.h"

/**
 * _helper - Compares each character of the string.
 * @s: input string to be checked
 * @i: iterator.
 * @l: length of the string.
 * Return: comparison
*/

int _helper(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
	{
		return (0);
	}
	else if (i >= l)
		return (1);
	return (_helper(s, i + 1, l - 1));
}

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

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: string to be checked
 * Return: 1 if a string is a palindrome otherwise returns 0
*/

int is_palindrome(char *s)
{
	if (!*s)
		return (1);
	return (_helper(s, 0, _strlen_recursion(s)));
}
