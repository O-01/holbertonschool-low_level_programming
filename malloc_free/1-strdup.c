#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates string s1 & returns pointer to the duplicate
 * @s1: object string
 * Return: pointer to duplicate of s1
 */

char *_strdup(char *s1)
{
	char *klon = 0;
	unsigned int x = 0;
	unsigned int y = strlen(s1) + 1;

	if (s1 == 0)
		return (NULL);

	klon = malloc(sizeof(char) * y);

	if (klon == 0)
		return (NULL);

	for (; x < y; x++)
		klon[x] = s1[x];

	return (klon);
}
