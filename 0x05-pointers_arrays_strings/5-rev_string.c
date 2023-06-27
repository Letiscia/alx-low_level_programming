#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses string
 *
 * @s: string
 */

void rev_string(char *s)
{
	int i, len, second;
	char temp;

	len = 0;
	second = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	second = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[second];
		s[second--] = temp;
	}
}
