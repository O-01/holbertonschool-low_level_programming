#include "main.h"

/**
 * times_table - multiples of n in y table
 * @n: input number, acceptable range: 0 - 15
 */
void print_times_table(int n)
{
	int y = 0, x = 0, result;

	if (n < 0 || n > 15)
		return;
	for (y = 0; y <= n; ++y)
	{
		for (x = 0; x <= n; ++x)
		{
			result = y * x;
			if (x > 0 && x <= n)
			{
				_putchar(',');
				_putchar(' ');
				if (result > 9 && result < 100)
					_putchar(' ');
				else if (result < 10)
					_putchar(' '),
					_putchar(' ');
			}
			if (result < 10)
				_putchar(result + '0');
			else if (result > 9 && result < 100)
				_putchar((result / 10) + '0'),
				_putchar((result % 10) + '0');
			else if (result > 99 && result < 1000)
				_putchar((result / 100) + '0'),
				_putchar(((result / 10) - ((result / 100) * 10)) + '0'),
				_putchar((result % 10) + '0');
			if (x == n)
				_putchar('\n');
		}
	}
}
