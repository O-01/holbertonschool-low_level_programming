#include "main.h"

/**
 * create_array - creates array of size sz & initializes with character c
 * @sz: size of array to be created
 * @c: character with which array to be initialized
 * Return: NULL if sz 0; else pointer to created array
 */
char *create_array(unsigned int sz, char c)
{
	unsigned int iter = 0;
	char *array = NULL;

	if (!sz)
		return (NULL);
	array = malloc(sizeof(char) * sz);
	if (!array)
		return (NULL);
	for (; iter < sz; ++iter)
		array[iter] = c;
	return (array);
}
