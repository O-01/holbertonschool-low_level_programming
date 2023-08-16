#include "search_algos.h"

/**
 * linear_search - search array for value using linear search algorithm
 * @array: object array
 * @size: size of array
 * @value: value to be sought within array
 * Return: index where value found, -1 upon value not found or NULL array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || !size)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
