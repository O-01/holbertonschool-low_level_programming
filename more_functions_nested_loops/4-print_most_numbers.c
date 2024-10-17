#include "main.h"

/**
 * print_most_numbers - use print_numbers to (obvious) 0-9 except 2 & 4
 */
void print_most_numbers(void)
{
	char num = '0';

	for (; num <= '9'; ++num)
		if (num != '2' && num != '4')
			_putchar(num);
	_putchar('\n');
}
