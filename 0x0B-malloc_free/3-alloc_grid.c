#include "main.h"

/**
 * alloc_grid - mem alloc grid
 * @width: rows
 * @height: columns
 * Return: pointer to grid
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
			for (i--; i >= 0; i--)
			{
				free(grid[i]);
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
