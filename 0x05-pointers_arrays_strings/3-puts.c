#include <string.h>
#include "main.h"
/**
 * _puts - to print a string.
 * @str: string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
