#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers until 98 from n
 * @n: origin number to display numbers until 98
 *
 * Return: 0
 *
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d\n", n);
		}
		(n++);
	}

	while (n >= 98)
	{
		if (n > 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d\n", n);
		}
		(n--);
	}
}
