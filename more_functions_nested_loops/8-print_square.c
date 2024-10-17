#include "main.h"

/**
 * print_square - print square of size n
 * @size: length of square edge
 */
void print_square(int size)
{
	int y = 0, x = 0;

	if (size <= 0)
		_putchar('\n');
	for (; y < size; ++y)
	{
		for (x = 0; x < size; ++x)
			_putchar('#');
		_putchar('\n');
	}
}
