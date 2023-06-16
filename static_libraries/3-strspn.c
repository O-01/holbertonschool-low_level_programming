#include "main.h"

/**
 * _strspn - finds length of s1 until it no longer matches s2
 * @s1: object string 1
 * @s2: string to be compared against
 * Return: number of characters until which s1 matches any from s2
 */

unsigned int _strspn(char *s1, char *s2)
{
	unsigned int x;
	unsigned int y;
	unsigned int z = 0;

	for (x = 0; s1[x] != '\0'; x++)
	{
		if (z != x)
			break;
		for (y = 0; s2[y] != '\0'; y++)
			if (s1[x] == s2[y])
				z++;
	}

	return (z);
}
