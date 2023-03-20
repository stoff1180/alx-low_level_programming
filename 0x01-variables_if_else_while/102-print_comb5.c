#include <stdio.h>
/**
 * main - main function combinations of two two-digit numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 1; l < 10; l++)
				{
					if ((i + j) < (k + l) && i + j + k + l != 35)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
