#include "main.h"

/**
 * _strspn - finds length of s1 until it no longer matches s2
 * @s1: object string 1
 * @s2: string to be compared against
 * Return: number of characters until which s1 matches any from s2
 */
unsigned int _strspn(char *s1, char *s2)
{
	unsigned int iter = 0, s2_iter = 0, spn = 0;

	for (iter = 0; s1[iter]; ++iter, ++spn)
	{
		for (s2_iter = 0; s2[s2_iter]; ++s2_iter)
			if (s1[iter] == s2[s2_iter])
				break;
		if (!s2[s2_iter])
			break;
	}
	return (spn);
}
