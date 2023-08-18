#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 * if separator is NULL, don't print it.
 * if one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function.
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
