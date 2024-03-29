#include "main.h"

/**
 * create_file - that creates a file
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to a string to write to the file
 * Return: 1 on success, 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes = write(fd, text_content, len);

	if (fd == -1 || bytes == -1)
		return (-1);

	close(fd);
	return (1);
}
