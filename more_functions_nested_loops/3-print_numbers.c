#include "main.h"

/**
 * print_numbers - use print_numbers to (obvious) 0-9
 */
void print_numbers(void)
{
	char num = '0';

	for (; num <= '9'; ++num)
		_putchar(num);
	_putchar('\n');
}
