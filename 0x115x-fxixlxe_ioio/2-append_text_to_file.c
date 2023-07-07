#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: pointer to the name of the file
 * @text_content: the string to add at end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, f_write, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_RDWR, 0664);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i += 1;
		f_write = write(file, text_content, i);
		if (f_write == -1)
			return (-1);
	}

	close(file);

	return (1);
}
