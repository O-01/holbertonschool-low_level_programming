#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: victim string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int a, b, v;

	a = 0;

	while (str[a] != '\0')
		(a++);

	for (b = (a / 2); str[b] != '\0'; b++)
	{
		v = (a % 2);
		if (v == 1)
			(b++);

		_putchar(str[b]);
	}

	_putchar('\n');
}
