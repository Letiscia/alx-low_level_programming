#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @dest: destination
 * @src: string.
 * Return: dest
 *
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
	{
		i++;
	}
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);

}
