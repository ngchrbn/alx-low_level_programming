#include "main.h"

/**
 * char *_strpbrk - Searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string containing the characters to search for
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
