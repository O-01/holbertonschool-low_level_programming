#include "main.h"

/**
 * print_alphabet - use print_alphabet to (obvious)
 */
void print_alphabet(void)
{
	char alpha = 'a';

	for (; alpha <= 'z'; ++alpha)
		_putchar(alpha);
	_putchar('\n');
}
