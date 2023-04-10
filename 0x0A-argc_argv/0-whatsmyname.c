#include <stdio.h>
/**
 * whatsmyname - prints the name of the program followed by a new line.
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the strings which are those arguments
 * Return: 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
    printf("%s\n", argv[0]);
    return (0);
}