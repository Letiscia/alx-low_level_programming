#include <stdlib.h>
#include "main.h"

/**
 *array_range - creates an array of integers.
 *@min: minimum value.
 *@max: maximum value.
 *
 *Return: pointer to array.
 */

int *array_range(int min, int max)
{
	int a;
	int b;
	int *ptr;

	a = 0;

	if (min > max)
		return (NULL);

	a = ((max + 1) - min);

	ptr = malloc(a * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (b = 0; b < a; b++)
	{
		*(ptr + b) = min + b;
	}

	return (ptr);
}
