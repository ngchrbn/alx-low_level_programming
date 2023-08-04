#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _is_digit - checks if a string is a digit
 * @s: string to be processed
 * Return: 1 if digit, 0 otherwise
*/
int _is_digit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}
/**
 * main - Prints the result of the sum of two positive numbers,
 * followed by a new line
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the strings which are those arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j, sum = 0;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			if (!_is_digit(argv[j]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[j]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
