#include <stdio.h>

/**
 * main - prints alphabet in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	for (; alpha <= 'z'; ++alpha)
		putchar(alpha);
	putchar('\n');
	return (0);
}
