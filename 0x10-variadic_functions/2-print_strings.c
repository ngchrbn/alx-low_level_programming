#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * if separator is NULL, no print.
 * if one of the string is NULL, print (nil) instead.
 * @separator: string to be printed between strings.
 * @n: number of strings passed to the function.
 * Returns: Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	char *str;

	va_start(ap, n);

	separator = separator ? separator : "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		str = str ? str : "(nil)";

		printf("%s", str);

		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
