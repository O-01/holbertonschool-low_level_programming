#include <stdio.h>

/**
 * main - print numbers 0 - 9 followed by new line
 *
 * Return: 0
 *
 */

int main(void)
{
int n;

for (n = 0; n < 10; ++n)
{
putchar('0' + n);
}
putchar('\n');
return (0);
}
