#include <stdio.h>
#include <unistd.h>

/**
 * main - prints Dora Korpar quote fragment to STDERR
 * Return: 1
 */

int main(void)
{
	unsigned int x = 0;
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	for (; s[x]; x++)
		;

	write(2, s, x);

	return (1);
}
