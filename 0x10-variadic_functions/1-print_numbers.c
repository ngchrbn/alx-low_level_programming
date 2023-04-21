#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followerd by a new line.
 * if separator is NULL, no print.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Returns: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	va_start(ap, n);

	separator = separator ? separator : "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
