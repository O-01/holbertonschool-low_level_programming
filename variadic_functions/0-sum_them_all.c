#include "variadic_functions.h"

/**
 * sum_them_all - finds sum of flexible amount of supplied numbers
 * @n: appears to be length of arguments supplied after it until end
 * Return: sum of supplied numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list supply;
	unsigned int iter = 0;
	int sum = 0;

	if (!n)
		return (0);
	va_start(supply, n);
	for (; iter < n; ++iter)
		sum += va_arg(supply, unsigned int);
	va_end(supply);
	return (sum);
}
