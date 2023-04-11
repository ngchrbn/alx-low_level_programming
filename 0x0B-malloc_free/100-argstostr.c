#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argc.
 * @av: argv.
 * Return: NULL if ac == 0 or av == NULL or function fails,
 * otherwise a pointer to a new string.
*/

char *argstostr(int ac, char **av)
{
	char *buffer;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;
	buffer = malloc(size * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			buffer[k] = av[i][j];
			k++;
		}
		buffer[k] = '\n';
		k++;
	}
	buffer[k] = '\0';
	return (buffer);
}
