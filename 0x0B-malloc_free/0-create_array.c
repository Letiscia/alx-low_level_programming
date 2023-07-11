#include "main.h"
#include <stdlib.h>

/**
 * create_array - prints an array of character
 * @c: character
 * @size: the size of the memory to print
 *
 * Return: ptr.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int count;
	{
		ptr = (char *) malloc(size * sizeof(char *));

			for (count = 0; count <= size; count++)

			ptr[count] = c;
	}
			return (ptr);
}
