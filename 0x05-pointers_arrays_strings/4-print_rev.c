#include "main.h"
#include <stdio.h>

/**
 * print_rev - print in reverse
 * @s: string
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	printf("%s", strrev(str));

	return (0);
}
