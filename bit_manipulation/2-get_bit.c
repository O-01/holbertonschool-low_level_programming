#include "main.h"

/**
 * get_bit - retrieves bit of input at specified index
 * @input: object number
 * @index: index of input binary to retrieve
 * Return: bit at index of input (0 or 1)
 */

int get_bit(unsigned long int input, unsigned int index)
{
	int x;

	x = input >> index;

	if (!x)
		return (-1);

	return (x & 1);
}
