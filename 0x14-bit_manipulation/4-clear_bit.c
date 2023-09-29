#include "main.h"

/**
* clear_bit - that sets the value of a given bit to 0
* @n: pointer to the number to change
* @index: parameter to index of the bit to clear
* Return: 1 for success, -1 for error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
