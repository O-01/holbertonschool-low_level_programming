#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums of values of 2d array a of size s
 * @a: object array
 * @s: size of array
 * Return: void
 */

void print_diagsums(int *a, int s)
{
	int w;
	int x = 0;
	int y = 0;

	for (w = 0; w < s; w++)
	{
		x += a[(s + 1) * w];
		y += a[(s - 1) * (w + 1)];
	}

	printf("%d, %d\n", x, y);

}
