#include "main.h"

/**
* get_endianness - that checks if a machine is little or big endian
* Return: 0 for big, 1 for small
*/
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &n;

	return (*c);
}
