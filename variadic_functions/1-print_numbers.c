#include "variadic_functions.h"

/**
 * print_numbers - prints numbers delimited by input separator
 * @separator: delimiter between numbers to be printed
 * @n: number of arguments following itself
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list set;
	unsigned int iter = 0;

	va_start(set, n);
	for (; iter < n; ++iter)
	{
		printf("%d", va_arg(set, unsigned int));
		if (separator && iter < n - 1)
			printf("%s", separator);
	}
	va_end(set);
	printf("\n");
}
