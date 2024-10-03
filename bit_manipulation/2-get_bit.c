#include "main.h"

/**
 * get_bit - retrieves bit of input at specified index
 * @input: object number
 * @index: index of input binary to retrieve
 * Return: bit at index of input (0 or 1)
 */
int get_bit(unsigned long int input, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((input >> index) & 1);
}
