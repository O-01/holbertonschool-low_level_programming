#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * create_array - creates array of size sz & initializes with character c
 * @sz: size of array to be created
 * @c: character with which array to be initialized
 * Return: NULL if sz 0; else pointer to created array
 */

char *create_array(unsigned int sz, char c)
{
	unsigned int x = 0;
	char *y = 0;

	if (sz == 0)
		return (NULL);

	y = malloc(sizeof(char) * sz);
/*
	if (y == 0)
		return (NULL);
*/
	for (; x <= sz; x++)
		y[x] = c;

	return (y);
}
