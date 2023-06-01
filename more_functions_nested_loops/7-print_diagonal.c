#include "main.h"

/**
 * print_diagonal - print \ following spaces to value of int n
 * @n: number of spaces to print followed by \
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int soz;
	int siz;

	if (n > 0)
	{
		for (soz = 0; soz < n; soz++)
		{
			for (siz = 0; siz < soz; siz++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
