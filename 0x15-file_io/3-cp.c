#include "main.h"

#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"

/**
 * main - check the code for Holberton School students.
 * @argc: num of args
 * @argv: args
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int i, j, a, w, r;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	j = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (j == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
	 = open(argv[1], O_RDONLY);
	if (i == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
	while (1)
	{
		r = read(from, buffer, 1024);
		if (r == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
		if (r > 0)
		{
			w = write(to, buffer, r);
			if (w == -1)
				dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
		} else
			break;
	}
	a = close(from);
	if (a == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
	a = close(to);
	if (a == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);
	return (0);
}
