/**
 * swap_int - swaps the values of two integers.
 * @a: integer a
 * @b: integer b
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int a;
	a = *a;
	*a = *b;
	*b = a;
}
