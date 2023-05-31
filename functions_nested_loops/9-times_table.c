#include "main.h"

/**
 * times_table - multiples of 9 in a table
 *
 * Return: 0
 */

void times_table(void)
{
	int a;
	int b;
	int v;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			v = a * b;
			if (b > 0 && b <= 9)
			{
				if (v > 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			if (v <= 9)
			{
				_putchar(v + 48);
			}
			else
			{
				_putchar((v / 10) + 48);
				_putchar((v % 10) + 48);
			}
			if (b == 9)
			{
				_putchar('\n');
			}
		}
	}
}
