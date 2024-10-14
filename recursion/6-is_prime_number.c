#include "main.h"

int primediv(int x, int y);
int is_prime_number(int n);

/**
 * primediv - checks if input x is divisible by y
 * @x: object value to divide by y
 * @y: value by which x is divided, minimum value should be 2
 * Return: 1 if x not divisible by y, else 0
 */
int primediv(int x, int y)
{
	if (x % y == 0)
		return (0);
	if (y == (x / 2))
		return (1);
	return (primediv(x, (y + 1)));
}

/**
 * is_prime_number - checks if n is a prime number
 * @n: object value
 * Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	int y = 2;

	if ((n < 2 && n > -2) || n < 0)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	return (primediv(n, y));
}
