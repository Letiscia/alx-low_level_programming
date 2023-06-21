#include "main.h"
#include <stdio.h>
/**
 *print_sign - prints the sign of a number
 *@n: character value
 * Return: 1 or 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
		{
			putchar('0');
		}
			return (0);
		else
		{
			putchar('-');
		}
			return (-1);
}
