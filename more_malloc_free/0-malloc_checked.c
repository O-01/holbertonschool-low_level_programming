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
	void *oo = 0;

	oo = malloc(x);

	if (oo == NULL)
		exit(98);

	return (oo);
}
