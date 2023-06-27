#include "main.h"
#include <string.h>
/**
 * puts2 - print character of a string
 * @s: string
 */
void puts2(char *s)
{
	unsigned int a;

	for (a = 0; a < strlen(s); a = a + 2)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
