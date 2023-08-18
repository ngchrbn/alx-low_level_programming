#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: string to be printed betwen numbers
 * @n: number of integers passed to the function
 * if separator is NULL, don't print it.
 * Print a new line at the edn of your function.
 * Returns void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i < n - 1)
			if (separator != NULL)
				printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
