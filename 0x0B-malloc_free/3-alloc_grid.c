#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: parameter for rows
 * @height: number of columns
 * Return: return a pointer to pointer grid
 *
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}