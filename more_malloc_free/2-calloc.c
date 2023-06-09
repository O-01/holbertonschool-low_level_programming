#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for array of nm elements of sz bytes each
 * @nm: array elements for which memory to be allocated
 * @sz: size of each nm
 * Return: pointer to allocated memory, NULL if either input is 0 or func NULL
 */

void *_calloc(unsigned int nm, unsigned int sz)
{
	void *uu;

	if (nm == 0 || sz == 0)
		return (NULL);

	uu = malloc(nm * sz);

	if (uu == NULL)
		return (NULL);

	memset(uu, 0, nm * sz);

	return (uu);
}
