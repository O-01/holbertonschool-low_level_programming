#include "main.h"

/**
 * string_toupper - converts lower case characters of a string to upper
 * @s1: string to convert
 * Return: string
 */

char *string_toupper(char *s1)
{
	int x;

	for (x = 0; s1[x] != '\0'; x++)
		if (s1[x] >= 'a' && s1[x] <= 'z')
			s1[x] = (s1[x] - 32);

	return (s1);
}
