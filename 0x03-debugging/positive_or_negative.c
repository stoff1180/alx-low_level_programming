#include "main.h"
/**
 * positive_or_negative - test numbers positive or negative
 * @i: parameter
 * Return: alwyas void
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
		printf("%d is positive", i);
}
