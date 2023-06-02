#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: victim string
 *
 * Return: void
 */

void puts2(char *str)
{
	int a, b;

	for (a = 0; str[a] != '\0'; a++)
	{
		b = (a % 2);
		if (b == 0)
			_putchar(str[a]);

	}

	_putchar('\n');
}
