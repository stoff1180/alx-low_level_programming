#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - thats frees 2d array
 * @grid: pointer to 2 dimentional grid
 * @height: parameter to height dimension of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
