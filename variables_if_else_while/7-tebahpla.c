#include <stdio.h>

/**
 * main - print numbers 0 - 9 followed by new line
 *
 * Return: 0
 *
 */

int main(void)
{
char n;

for (n = 'z'; n >= 'a'; --n)
{
putchar(n);
}
putchar('\n');
return (0);
}
