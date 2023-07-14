#include <stdio.h>

/**
 * main - prints all possible combinations of 3 digits
 * Return: 0
 */

int main(void)
{
	int x = 0, y = 0, z = 0;

	for (; x < 8; x++)
		for (y = x + 1; y < 9; y++)
			for (z = y + 1; z < 10; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');

				if (x == 7 &&
				    y == 8 &&
				    z == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
	putchar('\n');
	return (0);
}
