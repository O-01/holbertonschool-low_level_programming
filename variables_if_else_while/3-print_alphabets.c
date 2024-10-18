#include <stdio.h>

/**
 * main - prints alphabet in lowercase, followed by same in uppercase
 * Return: 0
 */
int main(void)
{
	char alpha = 'a', ALPHA = 'A';

	for (; alpha <= 'z'; ++alpha)
		putchar(alpha);
	for (; ALPHA <= 'Z'; ++ALPHA)
		putchar(ALPHA);
	putchar('\n');
	return (0);
}
