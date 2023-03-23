#include "main.h"
/**
 * positive_or_negative - test numbers positive or negative
 * @i: parameter
 * Return: alwyas void
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
		printf("%d is negative", i);
}
