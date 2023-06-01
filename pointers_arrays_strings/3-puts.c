#include "main.h"

/**
 *
 *
 *
 *
 */

void _puts(char *str)
{
	int ong;

	for (ong = 0; str[ong] != '\0'; str++)
		_putchar(*str);

	_putchar('\n');
}
