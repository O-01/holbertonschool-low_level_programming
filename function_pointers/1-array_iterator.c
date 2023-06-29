#include "function_pointers.h"

/**
 * array_iterator - iterate through array of size using action function
 * @array: input array
 * @size: input size
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array != NULL || action != NULL)
		for (; x < size; x++)
			action(array[x]);
}
