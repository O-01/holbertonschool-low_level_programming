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
	char *dude;
	int x = 0;

	va_start(surf, frmt);
	while (frmt && frmt[x])
	{
		switch (frmt[x])
		{
		case 'c':
			printf("%c", (char) va_arg(surf, int));
			break;
		case 'i':
			printf("%d", va_arg(surf, int));
			break;
		case 'f':
			printf("%f", va_arg(surf, double));
			break;
		case 's':
			dude = va_arg(surf, char *);
			if (!dude)
			{
				printf("(nil)");
				break;
			}
			printf("%s", dude);
			break;
		}
		if (frmt[x] != ('c' || 'i' || 'f' || 's') && frmt[x + 1])
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(surf);
}
