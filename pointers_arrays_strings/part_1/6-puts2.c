#include "main.h"

/**
 * puts2 - prints every other character of iter string
 * @str: victim string
 */
void puts2(char *str)
{
	int iter = 0;

	for (; str[iter]; iter++)
		if (!(iter & 1))
			_putchar(str[iter]);
	_putchar('\n');
}
