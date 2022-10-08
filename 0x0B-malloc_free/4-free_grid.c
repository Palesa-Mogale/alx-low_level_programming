#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a two dimensional grid
 * @grid: multidimensional array of integers
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
