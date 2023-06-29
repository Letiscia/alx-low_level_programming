#include "main.h"
#include <stdio.h>

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: destination
 * @src: pointer to source input
 * @n: number of bytes
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	/*null terminate dest*/
	dest[c + i] = '\0';

	return (dest);
}
