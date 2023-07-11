#include "main.h"

#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to file %s\n"
#define ERR_NOCLOSE "Error: Can't close file %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - that copies the contents of a file to another file
 * @ac: parameter to the number of arguments supplied to the program
 * @av: pointer to an array of pointers to the arguments
 * Return: 1 on success, 0 on failure
 */
int main(int ac, char **av)
{
	int file_from = 0, file_to = 0;
	ssize_t bytes;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]);
		exit(98);
	}
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (file_to == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((bytes = read(file_from, buf, READ_BUF_SIZE)) > 0)
		if (write(file_to, buf, bytes) != bytes)
		{
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]);
			exit(99);
		}
	if (bytes == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]);
		exit(98);
	}

	file_from = close(file_from);
	file_to = close(file_to);
	if (file_from)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, file_from), exit(100);
	if (file_to)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, file_from), exit(100);
	return (1);
}
