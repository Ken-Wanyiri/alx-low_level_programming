#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2-dimensional grid
 * @grid: pointer to the 2-dimensional grid
 * @height: height of the grid
 *
 * This function frees the memory allocated for a 2-dimensional grid of itegers
 * It first frees each row of the grid, and then frees the grid itself.
 * Return: Nothing.
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

