#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}

/**
 * _concat - Concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: size of final string.
 * Return: pointer to the new allocated space in memory.
*/
char *_concat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int s1len = _strlen(s1);

	char *result = malloc(sizeof(char) * (n + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
		result[i] = s1[i];

	for (j = 0; j < (n - s1len); j++)
	{
		result[i] = s2[j];
		i++;
	}

	result[i] = '\0';

	return (result);
}


/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: bytes of s2 to be concatenated.
 * Return: NULL if fails,
 * otherwise pointer to the newly allocated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;

	int s1len = _strlen(s1);
	int s2len = _strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= (sizeof(s2) - 1))
	{
		result = _concat(s1, s2, (s1len + s2len));

		return (result);

	}
	else
	{
		result = _concat(s1, s2, (s1len + n));

		return (result);
	}
}
