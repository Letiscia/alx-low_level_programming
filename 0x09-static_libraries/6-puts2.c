#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* puts2 - prints every other character of a string
* @str: string
*
**/
void puts2(char *str)
{
	int index;
	int length;

	length = strlen(str);

	for (index = 0; index < length; index = index + 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
