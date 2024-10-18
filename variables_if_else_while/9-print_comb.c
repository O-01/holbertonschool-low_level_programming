#include <stdio.h>

/**
 * main - print numbers 0 - 9 separated by comma & space each
 * Return: 0
 */
int main(void)
{
	int n = 0;

	for (; n < 10; ++n)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
