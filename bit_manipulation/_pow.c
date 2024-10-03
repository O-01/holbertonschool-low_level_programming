#include "main.h"

/**
 * _pow - calculates exponent of x to y recursively
 * @x: number of which we calculate to the power of y
 * @y: number to which x is raised exponentially
 * Return: -1 if y is neg, 1 if y is 0, sum if y greater than 0, else 0
 */
int _pow(int x, int y)
{
	return (y < 0 ? -1 : y == 0 ? 1 : x * _pow(x, (y - 1)));
}
