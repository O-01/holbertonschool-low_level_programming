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

for (n = 0; n <= 9; ++n)
{
putchar('0' + n);
if (n <= 8)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
