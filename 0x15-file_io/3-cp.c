#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: name of the file.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: file descriptors.
 */

void close_file(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - main file.
 * @argc: number of arguments.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on success.
*/

int main(int argc, char *argv[])
{
	int j, k, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_j file_k\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	j = open(argv[1], O_RDONLY);
	r = read(j, buffer, 1024);
	k = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (j == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(k, buffer, r);
		if (k == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(j, buffer, 1024);
		k = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(j);
	close_file(k);

	return (0);
}
