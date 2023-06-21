#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  * Description: prints the first 50 Fibonacci numbers
  * Return: Always 0 (Success)
*/

int main(void)
{
	int fibo;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (fibo = 0; fibo < 50; fibo++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (fibo == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
