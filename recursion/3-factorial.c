#include "main.h"

/**
 * factorial - calculates factorial sum of given n using recursion
 * @n: number of which we are calculating factorial sum
 * Return: for n, -1 if less than 0, 1 if 0, sum if greater than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (0);
}
