#include<stdio.h>

/**
 * first - prints a string before the main function is executed.
 * Return: void.
*/

void __attribute__ ((constructor)) first(void);

void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
		   "I bore my house upon my back!\n");
}
