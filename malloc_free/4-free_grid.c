#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees allocated memory from alloc_grid function
 * @grid: grid created using alloc_grid
 * @h: height
 * Return: void
 */

void free_grid(int **grid, int h)
{
	int y = h;

	if (grid != NULL)
		for (; y >= 0; y--)
			free(grid[y]);

	free(grid);
}
