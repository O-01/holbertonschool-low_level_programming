#include "main.h"

/**
 * _puts - prints string from pointer str
 * @str: pointer to string we are to print
 */
void _puts(char *str)
{
	int iter = 0;

	for (; str[iter]; ++iter)
		_putchar(str[iter]);
	_putchar('\n');
}
