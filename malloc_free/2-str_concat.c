#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two given strings s1 & s2
 * @s1: object string 1
 * @s2: object string 2
 * Return: pointer to result of concatenation in resp. freshly allocated memory
 */

char *str_concat(char *s1, char *s2)
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
	yy = strlen(s2) + 1;

	z = malloc((sizeof(char) * xx) + (sizeof(char) * yy));

	if (z == 0)
		return (NULL);

	for (; s1[x]; x++)
		z[x] = s1[x];

	for (; s2[y]; y++, x++)
		z[x] = s2[y];

	z[x] = '\0';

	return (z);
}
