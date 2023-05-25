#include <stdio.h>

/**
 * main - prints alphabet in lowercase w/o q or e, followed by a new line
 *
 * Return: 0
 *
 */

int main(void)
{

char alpha;

alpha = 'a';

while (alpha <= 'z' && alpha != ('e' && 'q'))
{
putchar(alpha);
alpha++;
}

putchar('\n');
return (0);
}
