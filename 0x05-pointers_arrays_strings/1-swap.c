#include "main.h"

/**
 * swap_int - that swaps the values of two integers
 * @a: parameter to checked
 * @b: parameter to be checked
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
