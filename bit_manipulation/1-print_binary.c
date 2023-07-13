#include "main.h"

/**
 * print_binary - prints binary equivalent of base10 input
 * @input: object number of base10
 * Return: void
 */

void print_binary(unsigned long int input)
{
	if (input > 1)
		print_binary(input >> 1);

	_putchar((input & 1) + 48);
}
