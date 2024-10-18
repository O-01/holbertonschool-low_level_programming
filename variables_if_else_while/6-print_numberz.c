#include <stdio.h>

/**
 * main - print numbers 0 - 9 followed by new line
 * Return: 0
 */
int main(void)
{
	int n = 0;

	for (; n < 10; ++n)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
