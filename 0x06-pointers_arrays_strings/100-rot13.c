#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes string
 * @s: pointer to string params
 *
 * Return: *s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == d([j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
