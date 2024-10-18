#include <stdio.h>

/**
 * main - prints all combinations of 2 digit numbers between 00 & 99
 * Return: 0 upon success
 */
int main(void)
{
	int left = 0, right = 0;

	for (; left < 99; left++)
	{
		for (right = left + 1; right < 100; right++)
		{
			putchar((left / 10) + '0');
			putchar((left % 10) + '0');
			putchar(' ');
			putchar((right / 10) + '0');
			putchar((right % 10) + '0');
			if (left == 98 && right == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
