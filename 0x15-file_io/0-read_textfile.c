#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 *                 it to the POSIX standard output.
 * @filename: pointer to name of  file
 * @letters: number of letters to read and print from file
 * Return: the actual number of letters it could read and print from file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, f_read, f_write;
	char *buffer;


	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	f_read = read(file, buffer, letters);
	if (f_read == -1)
		return (0);

	f_write = write(STDOUT_FILENO, buffer, f_read);

	if (f_write == -1)
		return (0);

	close(file);

	free(buffer);

	return (f_write);
}
