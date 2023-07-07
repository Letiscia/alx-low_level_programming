#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to memory area
 * @n: number of bytes
 *
 * Return: Pointer to the destination memory area (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*ptr++ = *src++;
	}
	return (dest);
}
