#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings delimited by input separator
 * @separator: delimiter between strings to be printed
 * @n: number of arguments following itself
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list set;
	unsigned int x = 0;
	char *ro = 0;

	va_start(set, n);

	for (; x < n; x++)
	{
		ro = va_arg(set, char *);

		if (ro == NULL)
			printf("(nil)");
		else
			printf("%s", ro);

		if (separator != NULL && x != n - 1)
			printf("%s", separator);
	}

	va_end(set);

	printf("\n");
}
