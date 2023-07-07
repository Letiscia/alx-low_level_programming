/**
 * _memset - fills block of memory with a particular value
 * @s: memory location to fill
 * @b: value to fill in the memory location
 * @n: number of bytes to be filled
 *
 * Return:  pointer to the memory location
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
