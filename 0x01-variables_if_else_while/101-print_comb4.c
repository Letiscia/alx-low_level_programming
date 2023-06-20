#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int num;
	int a;
	int c;

	for (num = 0; num <= 9; num++)
	{
		for (a = 1; a <= 9; a++)
		{
			for (c = 2; c <= 9; c++)
			{
				if (c > a && a > num)

				{
					putchar(num + '0');
				    putchar(a + '0');
				    putchar(c + '0');

					if (num != 15 || a != 16)

					{
						putchar(',');

						putchar(' ');
					}

				}

			}

		}

	}

	putchar('\n');
	return (0);
}

