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

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			for (k = 0; k < 100; k++)
			{
				for (l = 0; l < 100; l++)
				{
					if (i + j != k + l && i + j + k + l != 35)
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
