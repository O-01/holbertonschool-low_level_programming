#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 0-14 10 times
 */
void more_numbers(void)
{
	char num = 0, iter = 0;

	for (; iter < 10; ++iter)
	{
		for (num = 0; num <= 14; ++num)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
