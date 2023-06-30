#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers delimited by input separator
 * @separator: delimiter between numbers to be printed
 * @n: number of arguments following itself
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list set;
	unsigned int x = 0;
	int ro = 0;

	va_start(set, n);

	for (; x < n; x++)
	{
		ro = va_arg(set, unsigned int);
		printf("%d", ro);

		if (separator != NULL && x != n - 1)
			printf("%d%s", ro, separator);
	}

	va_end(set);

	printf("\n");
}
