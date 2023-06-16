#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: This function prints out a generated
  *		random number
  * Return: Always 0 (Success)
  */
int main(void)
{
	char value = 'a';

	do {
		putchar(value);
		value++;
	} while ("value <= 'z'");

	putchar('\n');
	return (0);
}
