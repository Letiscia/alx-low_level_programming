#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: filename.
 * @text_content: text content.
 * Return: 1 if succesfull else -1 on err
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, h = 0, d = 0;

	if (!filename)
		return (-1);

	d = open(filename, O_WRONLY | O_APPEND);
	if (d < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		h = write(d, text_content, i);
		if (h < 0)
		return (-1);
	}
	close(d);
	return (1);
}
