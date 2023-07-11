#include "main.h"

/**
 * main - that copies the contents of a file to another file
 * @argc: parameter to the number of arguments supplied to the program
 * @argv: pointer to an array of pointers to the arguments
 * Return: 0 on success
 */
int main(int argc, char **argv[])
{
	int from = 0, to = 0;
	ssize_t bytes;
	char buf[READ_BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(av[1], O_RONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	bytes = read(from, buf, READ_BUF_SIZE);
	do {
		if (from == -1 || bytes == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (to == -1 || (write(to, buf, bytes) != bytes))
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	} while (bytes > 0)
	from = close(from);
	to = close(to);
	if (from)
		dprintf(STDERR_FILENO,
				"Error: Can't close file %d\n", from), exit(100);
	if (to)
		dprintf(STDERR_FILENO,
				"Error: Can't close file %d\n", to), exit(100);
	return (EXIT_SUCCESS);
}
