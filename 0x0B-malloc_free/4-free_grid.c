#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - function to free 2-dimentional grid previously created
 * @grid: pointer to the grid
 * @height: height parameter of the grid
 *
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
