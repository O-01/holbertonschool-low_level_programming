#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory & checks that correct amount allocated
 * @b: what should be allocated
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *y;

	y = malloc(b);

	if (y == NULL)
		exit(98);

	return (y);
}
