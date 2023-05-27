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

	ppp = 1;

	while (ppp <= 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
		_putchar(alpha);
		}
		_putchar('\n');
		ppp++;
	}
}
