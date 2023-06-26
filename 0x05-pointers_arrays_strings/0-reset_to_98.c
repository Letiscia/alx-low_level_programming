#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - function that takes a pointer to an int as 
 * parameter and updates the value it points to to 98 
 *
 * Return: Always 0.
 */
int main(void)
{
   void reset_to_98(int *n);
   int n;

    n = 402;
    printf("n=%d\n", n);
    *n = 98;
    printf("n=%d\n", n);
    return (0);
}
