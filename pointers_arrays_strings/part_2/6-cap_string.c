#include "main.h"

/**
 * cap_string - capitalizes first letter of each word in a string
 * @s1: string, first letters of the words of which we capitalize
 * Return: s1
 */
char *cap_string(char *s1)
{
	int iter = 0;

	if (!s1)
		return ((void *)0);
	for (; s1[iter]; ++iter)
	{
		for (; !(s1[iter] >= 'a' && s1[iter] <= 'z'); ++iter)
			;
		if (s1[iter - 1] == '\t' || s1[iter - 1] == '\n' ||
			s1[iter - 1] == ',' || s1[iter - 1] == ';' ||
			s1[iter - 1] == '.' || s1[iter - 1] == '?' ||
			s1[iter - 1] == '(' || s1[iter - 1] == ')' ||
			s1[iter - 1] == '{' || s1[iter - 1] == '}' ||
			s1[iter - 1] == ' ' || s1[iter - 1] == '!' ||
			s1[iter - 1] == '"' || !iter)
			s1[iter] -= 32;
	}
	s1[iter] = '\0';
	return (s1);
}
