#include "main.h"

/**
 * leet - translate characters in s1 string to 1337 c0d3
 * @s1: object string
 * Return: s1
 */
char *leet(char *s1)
{
	int iter = 0, check_iter = 0;
	char a1[10] = "AEOTLaeotl", a2[10] = "4307143071";

	for (; s1[iter]; ++iter)
		for (check_iter = 0; check_iter < 10; ++check_iter)
			if (s1[iter] == a1[check_iter])
				s1[iter] = a2[check_iter];
	s1[iter] = '\0';
	return (s1);
}
