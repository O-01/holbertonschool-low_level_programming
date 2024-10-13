#include "main.h"

/**
 * free_grid - frees allocated memory from alloc_grid function
 * @grid: grid created using alloc_grid
 * @h: height
 */
void free_grid(int **grid, int h)
{
	int iter = 0;

	if (!grid)
		return;
	for (; iter < h; ++iter)
		free(grid[iter]);
	free(grid), grid = NULL;
}
