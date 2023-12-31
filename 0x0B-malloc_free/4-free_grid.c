#include <stdlib.h>
#include "main.h"

/**
 * free_grid-  a function that frees a 2 dimensional
 * grid previously created by alloc_grid function.
 *
 * @grid: grid to be freed
 * @height: height of the grid
 *
 * return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height < 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
