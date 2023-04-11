#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: a pointer to text to append
 * @text_content: text content to append to file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, file_write, index = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_RDWR);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (index = 0; text_content[index]; index++)
			file_write = write(file, text_content, index);

		if (file_write == -1)
			return (-1);
	}
	close(file);

	return (1);
}
