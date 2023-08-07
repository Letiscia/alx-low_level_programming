#include "main.h"

/**
 * read_textfile -  a function reads a text file and prints it to the POSIX standard output
 * @filenam: filename.
 * @letters:number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t i, j;
	char *ptr;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
	{
		close(fd);
		return (0);
	}
	i = read(fd, ptr, letters);
	close(fd);
	if (i == -1)
	{
		free(ptr);
		return (0);
	}
	j = write(STDOUT_FILENO, ptr, i);
	free(ptr);
	if (i != j)
		return (0);
	return (j);
}
