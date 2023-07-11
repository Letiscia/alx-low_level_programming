#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - copies a string
 * @str: String.
 *
 * Return: string
 */
char *_strdup(char *str)
{
	char *ptr;
	int size;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, str);
	return (ptr);

}
