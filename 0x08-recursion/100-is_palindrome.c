#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: char array string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int the_length(char *s);
	int palindrome(char *s, int l);
	int length;

	length = the_length(s) - 1;

	return (palindrome(s, --length));
}

/**
 * the_length - finds length of string
 * @s: string
 * Return: return length of string
 */

int the_length(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + the_length(++s));
}

/**
 * palindrome - recursive check of palindrome
 * @s: string
 * @l: length of string
 * Return: 1 if palindrome, 0 if not
 */

int palindrome(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (palindrome(++s, l - 2));
	}
	else
		return (0);
}
