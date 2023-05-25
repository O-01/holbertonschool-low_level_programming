#include <stdio.h>

/**
 * main - prints alphabet in lowercase, followed by a uppers & new line
 *
 * Return: 0
 *
 */

int main(void)
{

char alpha;
char alphaBig;

alpha = 'a';
alphaBig = 'A';

while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}

while (alphaBig <= 'Z')
{
putchar(alphaBig);
alphaBig++;
}

putchar('\n');
return (0);
}
