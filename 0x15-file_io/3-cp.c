#include "main.h"
#define BUFSIZE 1024

/**
 * error_check - prints error messages
 * @error: exit number or file descriptor
 * @str: files
 * @fd: file descriptor
 *
 * Return: 0 on success
 */
int error_check(int error, char *str, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - a function that creates a copy of file
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	int file1open, file2open;
	int file_read, file_write;
	int file1close, file2close;
	char buffer[1024];
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		error_check(97, NULL, 0);

	file1open = open(argv[1], O_RDONLY);
	if (file1open == -1)
		error_check(98, argv[1], 0);

	file2open = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, mode);
	if (file2open == -1)
		error_check(99, argv[2], 0);

	while ((file_read = read(file1open, buffer, BUFSIZE)) != 0)
	{
		if (file_read == -1)
			error_check(98, argv[1], 0);

		file_write = write(file2open, buffer, file_read);
		if (file_write == -1)
			error_check(99, argv[2], 0);
	}

	file1close = close(file1open);
	if (file1close == -1)
		error_check(100, NULL, file1open);

	file2close = close(file2open);
	if (file2close == -1)
		error_check(100, NULL, file2open);

	return (0);
}
