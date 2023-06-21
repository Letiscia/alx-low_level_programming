#include <stdio.h>
#include "main.h"
/**
 *  print_alphabet_x10 - times in lowercase
 *
 */
void print_alphabet_x10(void)
	{
	int n = 1;

	for (; n <= 10; n++)
	{
		char alpha = 'a';

		for (; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
