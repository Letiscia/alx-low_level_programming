#include <stdio.h>

/**
 * print_rev - print in reverse
 * @s: string
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	char *str;
	int i,n;
	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	
	for (i = n - 1; i >= 0; i--) 
	{
		printf("%c", str[i]);

	return (0);
}
