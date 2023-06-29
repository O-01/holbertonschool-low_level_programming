#include "function_pointers.h"

/**
 * int_index - indexes cmp input function return against array elements
 * @array: input array
 * @size: size of array
 * @cmp: compares input function return
 * Return: index of cmp return in array, -1 if no match or size < 1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size < 1 || cmp == NULL || array == NULL)
		return (-1);

	if (cmp != NULL)
		if (array != NULL)
			for (; x < size; x++)
			{
				cmp(array[x]);
				if (cmp(array[x]) > 0)
					return (x);
			}

	if (cmp(array[x]) == 0)
		return (-1);

	return (0);
}
