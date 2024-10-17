#include "main.h"

/**
 * print_triangle - prints triange of input size
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int y = 0, x = 0, angle = 0;

	if (size <= 0)
		_putchar('\n');
	for (; y < size; ++y)
	{
		angle = (size - y - 1);
		for (x = 0; x < size; ++x)
		{
			if (x < angle)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
