#include "main.h"

/**
 * set_bit - sets bit at index of input to 1
 * @input: object number
 * @index: position within binary of input
 * Return: 1 upon success, -1 upon error
 */

int set_bit(unsigned long int *input, unsigned int index)
{
	if (index > 63)
		return (-1);

	*input ^= (1 << index);

	return (1);
}
