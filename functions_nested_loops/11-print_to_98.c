#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers until 98 from n
 * @n: origin number to display numbers until 98
 */
void print_to_98(int n)
{
	if (n < 98)
		for (; n < 98; ++n)
			printf("%d, ", n);
	else if (n > 98)
		for (; n > 98; --n)
			printf("%d, ", n);
	printf("%d\n", n);
}
