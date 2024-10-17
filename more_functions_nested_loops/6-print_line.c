#include "main.h"

/**
 * print_line - print underscore to value of int n
 * @n: number of underscores to print
 */
void print_line(int n)
{
	int iter = 0;

	for (; iter < n; ++iter)
		_putchar('_');
	_putchar('\n');
}
