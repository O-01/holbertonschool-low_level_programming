#include "main.h"

/**
 * print_square - print square of size n
 * @size: length of square edge
 *
 * Return: void
 */

void print_square(int size)
{
	int soz;
	int siz;
	if (size > 0)
	{
		for (soz = 0; soz < size; soz++)
		{
			for (siz = 0; siz < size; siz++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
