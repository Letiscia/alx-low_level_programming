#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int a;

	for (a = 0; a <= 14; a++)
	{
		int b;

		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
				_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
		}

		_putchar('\n');
	}
}
