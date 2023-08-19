#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a char.
 * @ap: List of arguments.
 * Returns: Nothing
*/

void print_char(va_list ap)
{
		printf("%c", va_arg(ap, int));
}

/**
 * print_int - Prints an integer.
 * @ap: List of arguments.
 * Returns: Nothing
*/

void print_int(va_list ap)
{
		printf("%d", va_arg(ap, int));
}

/**
 * print_float - Prints a float.
 * @ap: List of arguments.
 * Returns: Nothing
*/

void print_float(va_list ap)
{
		printf("%f", va_arg(ap, double));
}

/**
 * print_string - Prints a string.
 * @ap: List of arguments.
 * Returns: Nothing
*/

void print_string(va_list ap)
{
		char *str = va_arg(ap, char *);

		str = str ? str : "(nil)";
		printf("%s", str);
}

/**
 * print_all - Prints anything.
 * where format is a list of types of arguments passed to the function.
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 * @format: list of types of arguments passed to the function.
 * Returns: Nothing
*/

void print_all(const char * const format, ...)
{
	va_list ap;

	unsigned int i, j;

	char *sep = "";

	type_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);

	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (types[j].type)
		{
			if (format[i] == types[j].type[0])
			{
				printf("%s", sep);
				types[j].f(ap);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
