#include "function_pointers.h"

/**
 * array_iterator - iterate through array of size using action function
 * @array: input array
 * @size: input size
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int iter = 0;

	if (!action || !array)
		return;
	for (; iter < size; ++iter)
		action(array[iter]);
}
