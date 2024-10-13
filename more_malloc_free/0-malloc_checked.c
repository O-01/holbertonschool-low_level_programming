#include "main.h"

/**
 * malloc_checked - allocates memory & checks that correct amount allocated
 * @b: what should be allocated
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *add = NULL;

	add = malloc(b);
	if (!add)
		exit(98);
	return (add);
}
