#include "main.h"

/**
 * string_toupper - converts lower case characters of a string to upper
 * @s1: string to convert
 * Return: string
 */
char *string_toupper(char *s1)
{
	int iter = 0;

	for (; s1[iter]; ++iter)
		if (s1[iter] >= 'a' && s1[iter] <= 'z')
			s1[iter] = (s1[iter] - 32);
	return (s1);
}
