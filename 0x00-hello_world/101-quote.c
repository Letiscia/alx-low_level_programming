#include <stdio.h>
#include <unistd.h>

/**
 *main - Entry point
 *and that piece of art is useful by dora korpar
 */
int main(void)
{
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quot, sizeof(quot) - 1);

	return (1);
}
