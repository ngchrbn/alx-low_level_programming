#include "main.h"

/**
 * char *_strstr - Locates a substring
 * @haystack: string to be searched
 *  @needle: substring to be searched for
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2;

	while (*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;


		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
