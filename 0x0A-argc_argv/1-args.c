#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: Always 0 success.
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
