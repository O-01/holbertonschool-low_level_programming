#include "main.h"

/**
 * times_table - multiples of 9 in y table
 */
void times_table(void)
{
	int y = 0, x = 0, result = 0;

	for (y = 0; y < 10; ++y)
	{
		for (x = 0; x < 10; ++x)
		{
			result = y * x;
			if (x > 0 && x < 10)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
					_putchar(' ');
			}
			if (result < 10)
				_putchar(result + '0');
			else
				_putchar((result / 10) + '0'),
				_putchar((result % 10) + '0');
			if (x == 9)
				_putchar('\n');
		}
	}
}
