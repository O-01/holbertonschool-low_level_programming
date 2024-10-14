#include "main.h"

/**
 * reverse_array - reverses array a of length n
 * @a: object array
 * @n: length of given array
 */
void reverse_array(int *a, int n)
{
	int iter = n - 1, mark = 0, hold = 0;

	if (!a || !n)
		return;
	for (mark = 0; mark < iter; ++mark, --iter)
	{
		hold = a[iter];
		a[iter] = a[mark];
		a[mark] = hold;
	}
}
