#include "main.h"
/**
 * print_square - print square
 * @size: number
 */
void print_square(int size)
{
	int a = 1;

	while (a <= size)
	{
		int b = 1;

		while (b <= size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
	if (size <= 0)
		_putchar('\n');
}
