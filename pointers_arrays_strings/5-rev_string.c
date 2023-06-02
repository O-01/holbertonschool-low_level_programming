#include "main.h"

/**
 * rev_string - prints string from pointer str, but backwards
 * @s: pointer to string we are to print
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a, b;
	char g;

	for (a = 0; s[a] != '\0'; a++);

	a--;

	for (b = 0; b < a; b++)
	{
			g = s[a];
			s[a] = s[b];
			s[b] = g;

			a--;
	}
}
