#include "main.h"

/**
 * _strcpy - copies strings
 *
 * @dest: destination
 * @src: source
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{

	int a = -1;
	do {
		a++;
		dest[a] = src[a];
	}
	while (src [a] != '\0');

	return (dest);
}
