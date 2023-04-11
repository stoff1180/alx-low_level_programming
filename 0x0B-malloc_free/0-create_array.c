#include "main.h"
#include <stdlib.h>
/**
 * *create_array - that creates an array of chars, and initializes it
 * @size: size of array
 * @c: character to initialize
 * Return: pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *n = (char *)malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
