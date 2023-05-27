#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - use print_alphabet to (obvious)
 *
 * Return: 0
 *
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}

	_putchar('\n');
}
