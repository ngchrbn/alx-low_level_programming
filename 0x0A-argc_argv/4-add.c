#include <stdio.h>
#include <stdlib.h>
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
			if (atoi(argv[j]) == 0)
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
