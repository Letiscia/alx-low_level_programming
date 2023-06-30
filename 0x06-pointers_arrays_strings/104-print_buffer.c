#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{
	int a, index;

	for (a = 0; a < size; a += 10)
	{
		printf("%08x: ", a);

		for (index = 0; index < 10; index++)
		{
			if ((index + a) >= size)
				printf("  ");
			else
				printf("%02x", *(b + index + a));
			if ((index % 2) != 0 && index != 0)
				printf(" ");
		}
		for (index = 0; index < 10; index++)
		{
			if ((index + a) >= size)
				break;
			else if (*(b + index + a) >= 31 &&
					*(b + index + a) <= 126)
				printf("%c", *(b + index + a));
			else
				printf(".");
		}
		if (a >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
