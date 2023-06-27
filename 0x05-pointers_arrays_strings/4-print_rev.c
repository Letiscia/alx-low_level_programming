#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: string
**/

void print_rev(char *s)
{
	int length;
	int index;

	length = strlen(s);
	for (index = length - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
