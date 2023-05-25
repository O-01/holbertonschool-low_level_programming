#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed.
 *
 * Return: 0
 *
 */

int main(void)
{
	int n;
	int final;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of d% is ", n);
	final = n % 10;
	if (final > 5)
	{
	printf("%d and is greater than 5\n", final);
	}
	else if (final == 0)
	{
	printf("%d and is 0\n", final);
	}
	else if (final < 6 && final != 0)
	{
	printf("%d and is less than 6 and not 0\n", final)
	}
	return (0);
}
