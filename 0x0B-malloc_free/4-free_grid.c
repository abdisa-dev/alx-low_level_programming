#include "main.h"

/**
 * free_grid - free up memory space allocated with grid
 * @grid: allocated memory space to make grid
 * @height: column
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
