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

	soz = 1;
	while (soz <= n)
	{
		siz = 1;
		while (siz <= soz)
		{
			_putchar(' ');
			(siz++);
		}
		_putchar('\\');
		_putchar('\n');
		(soz++);
	}
}
