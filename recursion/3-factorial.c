#include "main.h"

/**
 * factorial - calculates factorial sum of given n using recursion
 * @n: number of which we are calculating factorial sum
 * Return: for n, -1 if less than 0, 1 if 0, sum if greater than 0
 */
int factorial(int n) { return (n < 0 ? -1 : !n ? 1 : n * factorial(n - 1)); }
