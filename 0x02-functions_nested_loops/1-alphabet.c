#include "main.h"
/**
 * print_alphabet - prints all alphabets in lowercase
 *
 */
void print_alphabet(void)
{
	char alpha = 'a';

	for (; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
