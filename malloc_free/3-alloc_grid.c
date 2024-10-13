#include "main.h"

/**
 * alloc_grid - makes 2d int array of width w & height h
 * @w: width
 * @h: height
 * Return: NULL if w or h is null or upon fail, else pointer to 2d int array
 */
int **alloc_grid(int w, int h)
{
	int **grid = NULL;
	int x = 0, y = 0;

	if ((w * h) < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * h);
	if (!grid)
		return (NULL);
	for (; y < h; ++y)
	{
		grid[y] = malloc(sizeof(int) * w);
		if (!grid[y])
		{
			for (x = 0; x < y; ++x)
				free(grid[x]);
			free(grid), grid = NULL;
			return (NULL);
		}
	}
	for (y = 0; y < h; ++y)
		for (x = 0; x < w; ++x)
			grid[y][x] = 0;
	return (grid);
}
