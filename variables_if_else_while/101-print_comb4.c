#include <stdio.h>

/**
 * main - prints all possible combinations of 3 digits
 * Return: 0
 */
int main(void)
{
	int hundreds = 0, tens = 0, ones = 0;

	for (; hundreds < 8; ++hundreds)
		for (tens = hundreds + 1; tens < 9; ++tens)
			for (ones = tens + 1; ones < 10; ++ones)
			{
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(ones + '0');
				if (hundreds == 7 && tens == 8 && ones == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
	putchar('\n');
	return (0);
}
