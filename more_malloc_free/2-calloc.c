#include "main.h"

/**
 * _calloc - allocates memory for array of nm elements of sz bytes each
 * @nm: array elements for which memory to be allocated
 * @sz: size of each nm
 * Return: pointer to allocated memory, NULL if either input is 0 or func NULL
 */
void *_calloc(unsigned int nm, unsigned int sz)
{
	void *mem = NULL;

	if (!nm || !sz)
		return (NULL);
	mem = malloc(nm * sz);
	if (!mem)
		return (NULL);
	memset(mem, 0, nm * sz);
	return (mem);
}
