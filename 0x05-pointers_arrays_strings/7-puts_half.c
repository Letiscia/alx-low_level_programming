#include "main.h"

/**
 * puts_half - prints half of a string.
 *
 * @str: string.
 */

void puts_half(char *str)
{
	int len, a, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (len % 2)
	{
		for (a = (len - 1) / 2; a < len - 1; a++)
		{
			_putchar(str[a + 1]);
		}
	}
	_putchar('\n');
}
