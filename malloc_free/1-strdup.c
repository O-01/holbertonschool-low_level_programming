#include "main.h"

/**
 * _strdup - duplicates string s1 & returns pointer to the duplicate
 * @s1: object string
 * Return: pointer to duplicate of s1
 */
char *_strdup(char *s1)
{
	char *dup = NULL;
	unsigned int iter = 0, size = 0;

	if (!s1)
		return (NULL);
	size = strlen(s1) + 1;
	dup = malloc(sizeof(char) * size);
	if (!dup)
		return (NULL);
	for (; iter < size; ++iter)
		dup[iter] = s1[iter];
	return (dup);
}
