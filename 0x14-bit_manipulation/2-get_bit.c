#include "main.h"

/**
* get_bit - that returns the value of a bit at an index in a decimal number
* @n: parameter to number to search
* @index: parameter to index of the bit
* Return: value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;

	if (index > 63)
		return (-1);
	bitvalue = (n >> index) & 1;
	return (bitValue);
}
