#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate a two-dimensional array
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to the allocated 2D array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
    int **arr;
    int i, j;

    if (width <= 0 || height <= 0)
        return (NULL);

    arr = malloc(sizeof(int *) * height);
    if (arr == NULL)
        return (NULL);

    for (i = 0; i < height; i++)
    {
        arr[i] = malloc(sizeof(int) * width);
        if (arr[i] == NULL)
        {
            for (; i >= 0; i--)
                free(arr[i]);
            free(arr);
            return (NULL);
        }
    }

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
            arr[i][j] = 0;
    }

    return (arr);
}
