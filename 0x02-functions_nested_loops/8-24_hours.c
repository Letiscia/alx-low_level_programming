#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Return: None (void)
 */
void jack_bauer(void)
{
	int hour;
	int min;

	for (; hour < 24; hour++)
	{
		for (; min < 60; min++)
		{

			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
