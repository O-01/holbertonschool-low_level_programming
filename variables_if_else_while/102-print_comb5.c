#include <stdio.h>

/**
 * main - prints all combinations of 2 digit numbers between 00 & 99
 * Return: 0 upon success
 */

int main(void)
{
	int x = 0, y = 0;

	for (; x < 99; x++)
	{
		for (y = x + 1; y < 100; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');

			putchar(' ');

			putchar((y / 10) + '0');
			putchar((y % 10) + '0');

			if (x == 98 && y == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
