#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees memory allocated to a 2D array
 * @grid: pointer to the 2D array
 * @height: height of the 2D array
 *
 * Description: Frees the memory allocated to a 2D array of integers.
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
        free(grid[i]);

    free(grid);
}
