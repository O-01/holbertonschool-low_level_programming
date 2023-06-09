#include "main.h"

/**
 * print_triangle - prints triange of input size
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int sa;
	int se;
	int su;

	if (size > 0)
	{
		for (sa = 0; sa < size; sa++)
		{
			su = (size - sa - 1);
			for (se = 0; se < size; se++)
			{
				if (se < su)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
