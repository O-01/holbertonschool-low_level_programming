#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums of values of 2d array a of size s
 * @a: object array
 * @s: size of array
 */
void print_diagsums(int *a, int s)
{
	int w = 0, x = 0, y = 0;

	for (; w < s; ++w)
	{
		x += a[(s + 1) * w];
		y += a[(s - 1) * (w + 1)];
	}
	printf("%d, %d\n", x, y);
}
