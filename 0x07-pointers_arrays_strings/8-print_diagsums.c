#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer
 * @size: size
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, i, j;

	sum1 = 0;
	sum2 = 0;
	j = 0;
	{
		i = (j * size) + j;
		sum1 += a[i];
	}

	for (j = 1; j <= size; j++)
	{
		i = (j * size) - j;
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
