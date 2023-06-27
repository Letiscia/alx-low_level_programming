#include "main.h"

/**
 * puts_half - prints half of a string.
 *
 * @str: string.
 */

void puts_half(char *str)
{
	int length, a, i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = length / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (length % 2)
	{
		for (a = (length - 1) / 2; a < length - 1; a++)
		{
			_putchar(str[a + 1]);
		}
	}
	_putchar('\n');
}
