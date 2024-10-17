#include "main.h"

/**
 * print_diagonal - print \ following spaces to value of int n
 * @n: number of spaces to print followed by \
 */
void print_diagonal(int n)
{
	int y = 0, x = 0;

	if (n <= 0)
		_putchar('\n');
	for (; y < n; ++y)
	{
		for (x = 0; x < y; ++x)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
