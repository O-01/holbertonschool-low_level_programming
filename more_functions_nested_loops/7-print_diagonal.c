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

	for (soz = 1; soz <= n; soz++)
		_putchar(' ');
	_putchar('\\');
	_putchar('\n');
}
