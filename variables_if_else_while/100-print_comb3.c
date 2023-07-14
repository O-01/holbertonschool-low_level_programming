#include <stdio.h>

/**
 * main - prints all possible different combos of 2 digits
 * Return: 0
 */

int main(void)
{
	int x = 0, y = 0;

	for (; x < 10; x++)
		for (y = x + 1; y < 10; y++)
		{
			putchar(x + '0');
			putchar(y + '0');

			if (x == 8 && y == 9)
				continue;

			putchar(',');
			putchar(' ');
		}

	putchar('\n');
	return (0);
}
