#include "main.h"

char *createBuffer(char *file);
void closeFile(int fd);

/**
 * createBuffer - that allocates 1024 bytes for a buffer
 * @file: pointer to the name of the file buffer is storing chars for
 * Return: pointer to the newly-allocated buffer
 */
char *createBuffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * closeFile - that closes file descriptors
 * @fd: parameter to the file descriptor to be closed
 * Return: nothing
 */
void closeFile(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - that copies the contents of a file to another file
 * @argc: parameter to the number of arguments supplied to the program
 * @argv: pointer to an array of pointers to the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int from, to, r, bytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = createBuffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		bytes = write(to, buffer, r);
		if (to == -1 || bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	closeFile(from);
	closeFile(to);

	return (0);
}

