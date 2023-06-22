#include <ctype.h>
/**
 * _isupper - checks for uppercase character.
 * @c: integer
 *
 * Return: Always 0 or 1
 */
int _isupper(int c)
{
	if (isupper(c) == 'C')
		return (1);
	else
		return (0);
}
