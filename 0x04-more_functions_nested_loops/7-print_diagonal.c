#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: number of times
 * Return: void
 */
void print_diagonal(int n)
{
	int a = 1;

	while (a <= n)
	{
		int b = 1;

		while (b <= a)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
	if (n <= 0)
		_putchar('\n');
}
