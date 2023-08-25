#include "lists.h"

/**
 * before_main - Prints a string before main
 * Return: void
*/

void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
