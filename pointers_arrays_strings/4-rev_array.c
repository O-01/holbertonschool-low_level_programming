#include "main.h"

/**
 *
 *
 *
 *
 */

void reverse_array(int *a, int n)
{
	int x = 0;
	int y;
	int z;

	while (x < n && a[n] != '\0')
		x++;

	x--;

	for (y = 0; y < x; y++)
	{

		z = a[x];
		a[x] = a[y];
		a[y] = z;

		x--;
	}
}
