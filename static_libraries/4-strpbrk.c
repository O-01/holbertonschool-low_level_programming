#include "main.h"

/**
 * _strpbrk - search string s1 for all occurences of bytes from s2
 * @s1: string to be examined
 * @s2: sample string
 * Return: s1 bytes matching that of s2 if present, else NULL
 */

char *_strpbrk(char *s1, char *s2)
{
	char *x;

	while (*s1 != '\0')
	{
		x = s2;

		while (*x != '\0')
		{
			if (*s1 == *x)
				return (s1);

			x++;
		}
		s1++;
	}
	return (0);
}
