#include <stdio.h>
/**
 * main - main function all possible combinations
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9';)
	{
		putchar(i);
		if (i != '9')
		{
		putchar(',');
		putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
