#include "main.h"

/**
 * create_file - a function  tht creates a file
 * @filename: a pointer to the name of the file to create
 * @text_content: A pointer to a string to write to the file
 * Return: 1 on success, -1 on faiure
 */

int create_file(const char *filename, char *text_content)
{
	int file, file_write, index = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (index = 0; text_content[index]; index++)
			file_write = write(file, text_content, index);
		if (file_write == -1)
			return (-1);
	}

	close(file);
	return (1);
}
