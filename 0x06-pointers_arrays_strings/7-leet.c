#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string input parameter
 * Return: string
 */

char *leet(char *str)
{
	int i[5] = {97, 101, 111, 116, 108};
	int j[5] = {52, 51, 48, 55, 49};
	int x, y, z;

	for (x = 0; *(str + x); x++)
	{
		z = *(str + x);
		for (y = 0; y < 5; y++)
		{
			if (z == i[y] || z == (i[y] - 32))
			{
				*(str + x) = j[y];
				break;
			}
		}
	}
	return (str);
}
