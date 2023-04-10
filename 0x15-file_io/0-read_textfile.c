#include "main.h"

/**
 * read_textfile - a function that reads a text file
 *		   and prints it to the POSIX standard output.t
 * @filename: a pointer to text to read
 * @letters: number of letters
 * Return: the number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, file_read, file_write;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	file_read = read(file, buffer, letters);

	if (file_read == -1)
		return (0);
	file_write = write(STDOUT_FILENO, buffer, file_read);

	if (file_write == -1)
		return (0);

	free(buffer);
	close(file);

	return (file_write);
}
