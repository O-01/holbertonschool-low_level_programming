#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints inputs of various data types
 * @frmt: list of data types of input arguments
 * Return: void
 */

void print_all(const char * const frmt, ...)
{
	va_list surf;
	char *dude, *delim = ", ";
	int x = 0;

	va_start(surf, frmt);
	while (frmt && frmt[x])
	{
		switch (frmt[x])
		{
		case 'c':
			printf("%c%s", (char) va_arg(surf, int), delim);
			break;
		case 'i':
			printf("%d%s", va_arg(surf, int), delim);
			break;
		case 'f':
			printf("%f%s", va_arg(surf, double), delim);
			break;
		case 's':
			dude = va_arg(surf, char *);
			if (!dude)
				dude = "(nil)";
			printf("%s%s", dude, delim);
			break;
		}
		if (!frmt[x + 2])
			delim = "";
		x++;
	}
	printf("\n");
	va_end(surf);
}
