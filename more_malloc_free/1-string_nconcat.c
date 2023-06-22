#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_nconcat - concatenates two given strings s1 & n bytes of s2
 * @s1: object string 1
 * @s2: object string 2
 * @n: number of bytes of s2 to concatenate
 * Return: pointer to result of concatenation in resp. freshly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0;
	unsigned int y = 0;
	unsigned int xx = 0;
	unsigned int yy = 0;
	char *z = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	xx = strlen(s1);
	yy = n + 1;

	z = malloc((sizeof(char) * xx) + (sizeof(unsigned int) * yy));

	if (z == 0)
		return (NULL);

	for (; s1[x]; x++)
		z[x] = s1[x];

	for (; y < n && s2[y] != s2[n]; y++, x++)
		z[x] = s2[y];

	if (n < y)
		z[x] = '\0';

	return (z);
}
