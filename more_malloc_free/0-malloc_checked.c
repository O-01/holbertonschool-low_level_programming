#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - .
 * @b: allocated
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *oo = 0;

	oo = malloc(b);

	if (oo == NULL)
		exit (98);

	return (oo);
}
