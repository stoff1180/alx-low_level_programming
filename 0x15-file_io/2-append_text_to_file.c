#include "main.h"

/**
 * append_text_to_file - that appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to the string to add to the end of the file
 * Return: 1 on success, 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (len)
		bytes = write(fd, text_content, len);

	if (fd == -1 || bytes == -1)
		return (-1);
	close(fd);
	return (1);
}
