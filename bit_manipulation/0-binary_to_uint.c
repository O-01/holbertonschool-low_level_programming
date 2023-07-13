#include "main.h"

/**
 *
 *
 *
 */

unsigned int binary_to_uint(const char *input)
{
	unsigned int booger = 0;
	int x = 0, y = 0;
	unsigned int taker = 0;

	for (; input[x]; x++)
		;

	x--;

	for (; input[y]; y++)
	{
		if (!isdigit(input[y]))
			return (0);
		booger = (input[y] - 48) * _pow(2, x);
		taker += booger;
		x--;
	}

	return (taker);
}

/**
 * _pow - calculates exponent of x to y recursively
 * @x: number of which we calculate to the power of y
 * @y: number to which x is raised exponentially
 * Return: -1 if y is neg, 1 if y is 0, sum if y greater than 0, else 0
 */

int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
		return (x * _pow(x, (y - 1)));
	return (0);
}
