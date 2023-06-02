#include "main.h"

/**
 * print_rev - prints string from pointer str, but backwards
 * @s: pointer to string we are to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int a, b = 0;

	for (a = 0; s[a] != '\0'; a++)
		b++;

	b -= 1;
	for (a = b; a >= 0; a--)
		_putchar(s[a]);

	_putchar('\n');
}
