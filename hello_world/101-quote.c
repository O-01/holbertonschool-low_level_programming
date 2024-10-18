#include <stdio.h>
#include <unistd.h>

/**
 * main - prints Dora Korpar quote fragment to STDERR
 * Return: 1
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	unsigned int iter = 0;

	for (; s[iter]; ++iter)
		;
	write(2, s, iter);
	return (1);
}
