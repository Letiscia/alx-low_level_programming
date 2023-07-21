#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: The parameters to be added
 * Return: Always 0.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	/* init valist for the number of arguments */
	va_start(ap, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		int num = va_arg(ap, int);

		if (num < 0)
			sum -= -num;
		else
			sum += num;
	}

	va_end(ap);
	return (sum);
}
