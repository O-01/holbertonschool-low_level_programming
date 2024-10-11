#include "variadic_functions.h"

/**
 * print_all - prints inputs of various data types
 * @format: list of data types of input arguments
 */
void print_all(const char * const format, ...)
{
	va_list set;
	char *string, *delim = ", ";
	int iter = 0;

	va_start(set, format);
	while (format && format[iter])
	{
		switch (format[iter])
		{
		case 'c':
			printf("%c%s", (char) va_arg(set, int), delim);
			break;
		case 'i':
			printf("%d%s", va_arg(set, int), delim);
			break;
		case 'f':
			printf("%f%s", va_arg(set, double), delim);
			break;
		case 's':
			string = va_arg(set, char *);
			if (!string)
				string = "(nil)";
			printf("%s%s", string, delim);
			break;
		}
		if (!format[iter + 2])
			delim = "";
		++iter;
	}
	printf("\n");
	va_end(set);
}
