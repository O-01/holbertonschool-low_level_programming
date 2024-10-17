#include <stdio.h>

/**
 * main - prints 1-100 with Fizz & Buzz printed for each multiple of 3 & 5
 * respectively
 * Return: 0
 */
int main(void)
{
	int f = 1, printed = 0;

	for (; f <= 100; ++f, printed = 0)
	{
		if (!(f % 3))
			printed += printf("Fizz");
		if (!(f % 5))
			printed += printf("Buzz");
		if (!printed)
			printf("%d", f);
		if (f < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
