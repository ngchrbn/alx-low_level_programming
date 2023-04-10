#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the result of the multiplication, followed by a new line
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the strings which are those arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
