#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a = 0, b = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
	{
		a++;
	}

	while (s2[b] != '\0')
	{
		b++;
	}

	if (n > b)
	n = b;
	ptr = malloc((a + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (0);

	for (i = 0; i < a; i++)
	{
		ptr[i] = s1[i];
	}

	for (; i < (a + n); i++)
	{
		ptr[i] = s2[i - a];
	}
	ptr[i] = '\0';

	return (ptr);
}
