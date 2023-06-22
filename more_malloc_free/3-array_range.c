#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates array of int, having all values from min & max
 * @min: minimum integer value
 * @max: maximum integer value
 * Return: pointer to array, NULL if min < max or upon malloc failure
 */

int *array_range(int min, int max)
{
	int *sp = 0;
	int x = 0;

	if (min > max)
		return (NULL);

	sp = malloc(sizeof(int) * (max - min + 1));

	if (sp == NULL)
		return (NULL);

	for (; (x + min) <= max; x++)
		sp[x] = x + min;

	return (sp);
}
