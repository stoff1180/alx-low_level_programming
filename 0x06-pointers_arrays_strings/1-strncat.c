#include "main.h"

/**
 * _strncat - that concatenates two strings
 * @dest: pointer input
 * @src: pointer input
 * @n: parameter
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c] != '\0')
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';
	return (dest);
}
