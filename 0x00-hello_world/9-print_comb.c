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
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
