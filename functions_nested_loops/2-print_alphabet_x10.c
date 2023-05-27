#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - use print_alphabet_x10 to (obvious)
 * 10 times
 *
 * Return: 0
 *
 */

void print_alphabet_x10(void)
{
	char alpha;
	int ppp;

	alpha = 'a';

	for (ppp = 1; ppp <= 10; ppp++)
	{
		while (alpha <= 'z')
		{
		_putchar(alpha);
		alpha++;
		}
		_putchar('\n');
	}
}
