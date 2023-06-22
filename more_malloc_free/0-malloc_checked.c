#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory & checks that correct amount allocated
 * @x: what should be allocated
 * Return: void pointer
 */

void *malloc_checked(unsigned int x)
{
	void *y;

	y = malloc(x);

	if (y == NULL)
		exit(98);

	return (y);
}
