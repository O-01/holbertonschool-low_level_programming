#include "main.h"

/**
 * clear_bit - sets bit at index of input to 0
 * @input: object number
 * @index: position within binary of input
 * Return: 1 upon success, -1 upon error
 */

int clear_bit(unsigned long int *input, unsigned int index)
{
	if (index > 15)
		return (-1);

	if (*input)
		*input ^= (1 << index);

	return (1);
}
