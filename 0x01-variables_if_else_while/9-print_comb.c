#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: This program uses a while loop to generate
  *		lowercase alphabets
  *Return: Always 0 (Success)
  */
int main(void)
{
	int a = 0;

	do {
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	} while (a < 10);
	putchar('\n');

	return (0);
}
