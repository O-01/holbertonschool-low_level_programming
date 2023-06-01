#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 0-14 10 times
 *
 * Return: 0
 *
 */

void more_numbers(void)
{
	int po;
	int pu;

	for (pu = 0; pu <= 9; pu++)
	{
		for (po = 0; po <= 14; po++)
		{
			if (po > 9)
				_putchar((po / 10) + '0');
			_putchar((po % 10) + '0');
		}
		_putchar('\n');
	}
}
