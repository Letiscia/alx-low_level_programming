#include "main.h"
#include <ctype.h>
/**
 *_isalpha - check for letters
 *@c: character value
 * Return: 1 or 0.
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
