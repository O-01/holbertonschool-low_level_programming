#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - makes 2d int array of width w & height h
 * @w: width
 * @h: height
 * Return: NULL if w or h is null or upon fail, else pointer to 2d int array
 */

int **alloc_grid(int w, int h)
{
	int **mun = 0;
	int x = 0;
	int y = 0;

	mun = malloc(sizeof(int *) * h);

	if ((w * h) < 1 || mun == NULL)
		return (NULL);

	for (; x < w; x++)
	{
		mun[x] = malloc(sizeof(int) * w);

		if (mun[x] == NULL)
		{
			for (; x; x--)
				free(mun[x]);

			free(mun);

			return (NULL);
		}
	}

	for (; x < w; x++)
		for (; y < h; y++)
			mun[x][y] = 0;

	return (mun);
}
