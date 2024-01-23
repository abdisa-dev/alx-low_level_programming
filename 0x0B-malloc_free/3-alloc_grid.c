#include "main.h"

/**
 * 
 * 
*/

int **alloc_grid(int width, int height)
{
    int i, j, **grid;

    if (width + height < 2 || width == 0 || height == 0)
    {
        return (NULL);
    }

    grid = malloc(height * sizeof(*grid));

    if (grid == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(**grid));
        if (grid[i] == NULL)
        {
    free(grid[i]);
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