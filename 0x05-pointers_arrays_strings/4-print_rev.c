#include <stdio.h>

/**
 * print_rev - print in reverse
 * @s: string
 *
 * Return
 */
void print_rev(char *s)
{
	char *str;
	int i;

	for (i = strlen(str) - 1; i >= 0; i--)
	{
		_putchar("%s", str[i]);
	}
	_putchar('\n');
}
