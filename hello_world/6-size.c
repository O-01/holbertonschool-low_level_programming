#include <stdio.h>

/**
 * main - show byte values of char, int, long int, long
 * long int, and float on the local machine.
 *
 * Return: 0 means printing successful
 */

int main(void)
{

char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(c));
printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(i));
printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(li));
printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(lli));
printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(f));

return (0);
}
