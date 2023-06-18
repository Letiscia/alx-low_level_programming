#include <stdio.h>
/**
 * main - Program that prints base 16 lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int a = 0;
char alpha;
	for (; a <= 9;)
	{
		putchar(a + '0');
		a = a + 1;
	}
	for (alpha = 'a'; alpha <= 'f';)
	{
		putchar(alpha);
		alpha = alpha + 1;
	}
	putchar('\n');
	return (0);
}
