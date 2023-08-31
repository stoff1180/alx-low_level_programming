#include "main.h"

/**
* get_bit - that returns the value of a bit at an index in a decimal number
* @n: parameter to number to search
* @index: parameter to index of the bit
* Return: value of the bit or -1 on error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
