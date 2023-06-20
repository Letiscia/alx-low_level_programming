#include <stdio.h>

/**
 *main - program that prints all possible different combinations of two digits
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int a = 1;

	for (; num <= 9; num++)

	{
		for (a = 1; a <= 9; a++)
		{
			if (a > num)
			{
				putchar('0' + num);
				putchar('0' + a);
				if (num < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
