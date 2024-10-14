#include "main.h"

/**
 * puts_half - prints half of string
 * @str: victim string
 */
void puts_half(char *str)
{
	int iter = 0;

	if (!str)
		return;
	for (; str[iter]; ++iter)
		;
	if (iter & 1)
		++iter;
	for (iter /= 2; str[iter]; ++iter)
		_putchar(str[iter]);
	_putchar('\n');
}
