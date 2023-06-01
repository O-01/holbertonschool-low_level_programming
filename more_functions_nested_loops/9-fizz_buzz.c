#include <stdio.h>

/**
 * main - prints 1-100 with Fizz & Buzz printed for each multiple of 3 & 5
 * respectively
 *
 * Return: 0
 */

int main(void)
{
	int f;

	for (f = 1; f <= 100; f++)
	{
		if (((f % 3) == 0) && ((f % 5) == 0))
			printf("FizzBuzz");
		else if ((f % 3) == 0)
			printf("Fizz");
		else if ((f % 5) == 0)
			printf("Buzz");
		else
			printf("%d", f);

		if (f < 100)
			printf(" ");
	}
	putchar('\n');
}
