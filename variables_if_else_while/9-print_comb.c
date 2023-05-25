#include <stdio.h>

/**
 * main - print numbers 0 - 9 separated by comma & space each
 *
 * Return: 0
 *
 */

int main(void)
{
int n;

for (n = 0; n <= 8; ++n)
{
putchar('0' + n);
putchar(',');
putchar(' ');
}
putchar('9');
putchar('\n');
return (0);
}
