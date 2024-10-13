#include "main.h"

/**
 * array_range - creates array of int, having all values from min & max
 * @min: minimum integer value
 * @max: maximum integer value
 * Return: pointer to array, NULL if min < max or upon malloc failure
 */
int *array_range(int min, int max)
{
	int *array = NULL;
	int iter = 0;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (; (iter + min) <= max; ++iter)
		array[iter] = iter + min;
	return (array);
}
