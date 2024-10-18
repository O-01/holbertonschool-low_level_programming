#include "main.h"

/**
 * print_alphabet_x10 - use print_alphabet_x10 to (obvious)
 * 10 times
 */
void print_alphabet_x10(void)
{
	char alpha = 'a', iter = 0;

	for (; iter < 10; ++iter, _putchar('\n'))
		for (alpha = 'a'; alpha <= 'z'; ++alpha)
			_putchar(alpha);
}
