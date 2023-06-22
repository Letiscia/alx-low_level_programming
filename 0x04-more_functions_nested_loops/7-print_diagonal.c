#include "main.h"

/**
* print_diagonal - prints a diagonal line
* @n: The number of times
*
*/
void print_diagonal(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n > 0)
		{
			_putchar(' ')
			_putchar('\\');
			_putcha('\n');
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
