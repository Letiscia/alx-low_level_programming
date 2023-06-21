#include "main.h"

/**
 * times_table - print the times table from 0 through 9
 *
 *
 */
void times_table(void)
{
	int a = 0;

	for (a = 0; a <= 9; a++)
	{
		int b;

		for (b = 0; b <= 9; b++)
		{
			int t = b * a;

			if (t >= 10)
			{
				int num1 = t / 10;
				int num2 = t % 10;

				_putchar(num1 + '0');
				_putchar(num2 + '0');
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			} else
			{
				if (b != 0)
					_putchar(' ');
				_putchar(t + '0');
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
