#include "main.h"

/**
 * print_sign - prints whether num is +, -, or 0
 * @n: number checked for pos/neg/0
 * Return: 1 (>0) 0 (=0) -1 (<0)
 */
int print_sign(int n)
{
	if (n > 0)
		return (_putchar('+'), 1);
	else if (n < 0)
		return (_putchar('-'), -1);
	return (_putchar('0'), 0);
}
