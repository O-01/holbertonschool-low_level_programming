#include "main.h"

/**
 * _puts - prints string from pointer str
 * @str: pointer to string we are to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int ong;

	for (ong = 0; str[ong] != '\0'; str++)
		_putchar(*str);

	_putchar('\n');
}
