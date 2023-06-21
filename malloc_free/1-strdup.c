#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates string s1 & returns pointer to the duplicate
 * @s1: object string
 * Return: pointer to duplicate of s1
 */

char *_strdup(char *s1)
{
	char *klon = 0;
	unsigned int x = 0;
	unsigned int y = sizeof(s1);

	if (s1 == NULL)
		return (NULL);

	klon = malloc(sizeof(char) * y);

	if (klon == 0)
		return (NULL);

	for (; s1[x]; x++)
		klon[x] = s1[x];

	return (klon);
}