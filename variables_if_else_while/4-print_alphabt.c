#include <stdio.h>

/**
 * main - prints alphabet in lowercase w/o q or e, followed by a new line
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	for (; alpha <= 'z'; ++alpha)
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
	putchar('\n');
	return (0);
}
