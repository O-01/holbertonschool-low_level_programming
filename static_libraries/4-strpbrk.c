#include "main.h"

/**
 * _strpbrk - search string s1 for all occurences of bytes from s2
 * @s1: string to be examined
 * @s2: sample string
 * Return: s1 bytes matching that of s2 if present, else NULL
 */
char *_strpbrk(char *s1, char *s2)
{
	char *str1, *str2;

	for (str1 = s1; *str1; ++str1)
		for (str2 = s2; *str2; ++str2)
			if (*str1 == *str2)
				return (s1);
	return ((void *)0);
}
