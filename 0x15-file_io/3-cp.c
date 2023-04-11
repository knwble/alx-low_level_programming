#include "main.h"

/**
 * main - main function
 * @argc:  number of arguments
 * @argv:  content to write
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file1, file2, file_read, file_write;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),	exit(99);

	while (file_read)
	{
		file_read = read(file1, buffer, 1024);
		if (file_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (file_read > 0)
		{
			file_write = write(file2, buffer, file_read);
			if (file_write == -1 || file_write != file_read)

				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

		}
	}
	if (close(file1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1), exit(100);
	if (close(file2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2), exit(100);

	return (0);
}
