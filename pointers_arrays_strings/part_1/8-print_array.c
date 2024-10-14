#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array a of n length
 * @a: array pointer
 * @n: length of array
 */
void print_array(int *a, int n)
{
	int iter = 0;

	for (; iter < n; ++iter)
		printf("%d%s", a[iter], iter < (n - 1) ? ", " : "");
	printf("\n");
}
