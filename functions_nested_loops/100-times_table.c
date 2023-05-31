#include "main.h"

/**
 * times_table - multiples of n in a table
 * @n: input number
 *
 * Return: 0
 */

void print_times_table(int n)
{
	int a;
	int b;
	int v;

	if (n <= 15 && n >= 0)
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			v = a * b;

			if (b > 0 && b <= n)
			{
				if (v > 99 && v <= 999)
				{
					_putchar(',');
					_putchar(' ');
				}
				else if (v > 9 && v <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}

			if (v <= 9)
			{
				_putchar(v + 48);
			}
			else if (v >= 10 && v <= 99)
			{
				_putchar((v / 10) + 48);
				_putchar((v % 10) + 48);
			}
			else if (v >= 100 && v <= 999)
			{
				_putchar((v / 100) + 48);
				_putchar((v / 10) + 48);
				_putchar((v % 10) + 48);
			}

			if (b == n)
			{
				_putchar('\n');
			}
		}
	}
}
