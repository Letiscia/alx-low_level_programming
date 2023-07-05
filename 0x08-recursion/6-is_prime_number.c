#include "main.h"

/**
 * prime_num - detects if an input number is a prime number.
 * @n: input number.
 * @c: iterator.
 * Return: 1 if prime, 0 otherwise
 */
int prime_num(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)

			return (1);

		else

			return (0);

	}
	return (0 + prime_num(n, c + 1));
}
/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 0 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)

		return (0);

	if (n < 0)

		return (0);

	if (n == 1)

		return (0);

	return (prime_num(n, 2));
}
