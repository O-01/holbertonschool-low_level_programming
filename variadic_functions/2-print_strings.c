#include "variadic_functions.h"

/**
 * print_strings - prints strings delimited by input separator
 * @separator: delimiter between strings to be printed
 * @n: number of arguments following itself
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list set;
	unsigned int iter = 0;
	char *string = 0;

	va_start(set, n);
	for (; iter < n; ++iter)
	{
		string = va_arg(set, char *);
		printf("%s", string ? string : "(nil)");
		if (separator && iter != n - 1)
			printf("%s", separator);
	}
	va_end(set);
	printf("\n");
}
