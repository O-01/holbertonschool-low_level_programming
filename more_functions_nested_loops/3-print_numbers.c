#include <unistd.h>
#include "main.h"

/**
 * print_numbers - use print_numbers to (obvious) 0-9
 *
 * Return: 0
 *
 */

void print_numbers(void)
{
	int po;

	for (po = 0; po <= 9; po++)
		_putchar(po + '0');

	_putchar('\n');
}
