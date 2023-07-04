#include "main.h"
/**
 * * _strspn - length of a prefix substring.
 * * @s: string
 * * @accept: target
 * * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int a = 0;

	while (s[i] != '\0'
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				a++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])

				return (a);
		}

		i++;
	}

	return (a);

}
