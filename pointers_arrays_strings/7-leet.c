#include "main.h"

/**
 * leet - translate characters in s1 string to 1337 c0d3
 * @s1: object string
 * Return: s1
 */

char *leet(char *s1)
{
	int x;
	int y;
	char a1[10] = "AEOTLaeotl";
	char a2[10] = "4307143071";

	for (x = 0; s1[x] != '\0'; x++)
		for (y = 0; y < 10; y++)
			if (s1[x] == a1[y])
				s1[x] = a2[y];
	s1[x] = '\0';
	return (s1);
}
