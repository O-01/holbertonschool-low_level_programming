#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array a of n length
 * @a: array pointer
 * @n: length of array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int b, v;

	for (b = 0; b < n; b++)
	{
		v = (n - 1);
		if (b == v)
			printf("%d", a[b]);
		else
			printf("%d, ", a[b]);
	}

	printf("\n");
}
