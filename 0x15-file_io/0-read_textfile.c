#include "main.h"

/**
 * read_textfile- that reads text file print to STDOUT
 * @filename: pointer to text file being read
 * @letters: parameter to number of letters to be read
 * Return: number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t bytes;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	bytes = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (bytes);
}

