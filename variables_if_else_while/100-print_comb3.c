#include <stdio.h>

/**
 * main - prints all possible different combos of 2 digits
 * Return: 0
 */
int main(void)
{
	int tens = 0, ones = 0;

	for (; tens < 10; ++tens)
		for (ones = tens + 1; ones < 10; ++ones)
		{
			putchar(tens + '0');
			putchar(ones + '0');
			if (tens == 8 && ones == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
