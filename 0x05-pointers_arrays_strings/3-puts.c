#include <string.h>
#include "main.h"
/**
 * _puts - print string
 * @str: string to print
 */
void _puts(char *str)
{
	unsigned int a;

	for (a = 0; a < strlen(str); a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
