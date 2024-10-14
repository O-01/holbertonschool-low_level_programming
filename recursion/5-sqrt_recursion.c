#include "main.h"

int _sqrt_worker(int x, int y);
int _sqrt_recursion(int n);

/**
 * _sqrt_worker - increments y recursively until y squared equals x
 * @x: object number
 * @y: test number
 * Return: y printed when square value found, -1 if no natural square root
 */
int _sqrt_worker(int x, int y)
{
	if (x == (y * y))
		return (y);
	if (x < 0 || y == (x / 2))
		return (-1);
	return (_sqrt_worker(x, (y + 1)));
}

/**
 * _sqrt_recursion - calculate square root of n using recursion
 * @n: value of which we find square root
 * Return: -1 if N/A, else square root
 */
int _sqrt_recursion(int n)
{
	int y = 0;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (_sqrt_worker(n, y));
}
