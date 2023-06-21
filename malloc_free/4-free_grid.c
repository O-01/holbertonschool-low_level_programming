#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees allocated memory from alloc_grid function
 * @grid:
 * @h: height
 * Return:
 */

void free_grid(int **grid, int h)
{
	int y = h;

	for (; y >= 0; y--)
		free(grid[y]);

	free(grid);
}
