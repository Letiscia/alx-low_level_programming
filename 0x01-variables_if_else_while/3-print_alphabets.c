#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: This function prints out a generated
  *             random number
  * Return: Always 0 (Success)
  */
int main(void)
{
	char caps;
	char nocaps;

	for (nocaps = 'a'; nocaps <= 'z'; nocaps++)
	{putchar(nocaps); }

	for (caps = 'A'; caps <= 'Z'; caps++)
	{
		putchar(caps);
	}

	putchar('\n');

	return (0);
}
