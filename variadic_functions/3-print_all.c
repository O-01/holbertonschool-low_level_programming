#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *
 *
 *
 */

void print_all(const char * const frmt, ...)
{
	va_list surf;
	char *dude;
	int x, y = 0;

	va_start(surf, frmt);
	while (frmt && frmt[x])
	{
		switch (frmt[x])
		{
		case 'c':
			printf("%c", (char) va_arg(surf, int));
			y++;
			break;
		case 'i':
			printf("%d", va_arg(surf, int));
			y++;
			break;
		case 'f':
			printf("%f", va_arg(surf, double));
			y++;
			break;
		case 's':
			dude = va_arg(surf, char *);
			if (!dude)
			{
				printf("(nil)");
				break;
			}
			printf("%s", dude);
			y++;
			break;
		}
		if (y > 0 && !frmt[x + 1])
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(surf);
}
