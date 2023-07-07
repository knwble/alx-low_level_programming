#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: a pointer to name of the file to create
 * @text_content: a pointer to string to write
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, f_write, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
		f_write = write(file, text_content, i);
		if (f_write == -1)
			return (-1);
	}

	close(file);

	return (1);
}
