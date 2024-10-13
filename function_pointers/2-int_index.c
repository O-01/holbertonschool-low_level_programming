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
	int iter = 0;

	if (size < 1 || !cmp || !array)
		return (-1);
	for (; iter < size; ++iter)
		if (cmp(array[iter]))
			return (iter);
	return (-1);
}
