#include "main.h"

/**
 * jack_bauer - Bauer Bauer 24 hour
 *
 * Return: void
 */

void jack_bauer(void)
{
	int a;
	int b;
	int v;
	int g;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (v = 0; v < 6; v++)
			{
				for (g = 0; g <= 9; g++)
				{
					if (a == 2 && b > 3)
					{
						break;
					}
					_putchar(a + 48);
					_putchar(b + 48);
					_putchar(':');
					_putchar(v + 48);
					_putchar(g + 48);
					_putchar('\n');
				}
			}
		}
	}
}
