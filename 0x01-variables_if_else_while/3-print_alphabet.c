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
        char value = 'a';
	char value2 = 'A';

        do {
                putchar(value);
                value++;
        } while ("value <= 'Z'\n");
        return (0);
}
