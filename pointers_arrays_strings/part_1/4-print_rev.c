#include "main.h"

/**
 * print_rev - prints string from pointer str, but backwards
 * @s: pointer to string we are to print
 */
void print_rev(char *s)
{
	int iter = 0;

	if (!s)
		return;
	for (; s[iter + 1]; ++iter)
		;
	for (; iter >= 0; --iter)
		_putchar(s[iter]);
	_putchar('\n');
}
