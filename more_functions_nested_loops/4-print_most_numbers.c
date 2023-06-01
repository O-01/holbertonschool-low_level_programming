#include <unistd.h>
#include "main.h"

/**
 * print_most_numbers - use print_numbers to (obvious) 0-9 except 2 & 4
 *
 * Return: 0
 *
 */

void print_most_numbers(void)
{
	int po;

	for (po = 0; po <= 9; po++)
	{
		if (po != 2 && po != 4)
			_putchar(po + '0');
	}

	_putchar('\n');
}
