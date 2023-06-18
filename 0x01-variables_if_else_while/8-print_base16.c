#include <stdio.h>
/* program to print number of base 16 in lowercase*/
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
