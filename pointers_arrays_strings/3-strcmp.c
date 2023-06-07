#include "main.h"

/**
 * _strcmp - compares 2 strings & shows value upon reaching difference
 * @s1: string 1
 * @s2: string 2
 * Return: value of difference
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] == s2[x] && (s1[x] != '\0' || s2[x] != '\0'))
	{
		x++;
	}

	x = (s1[x] - s2[x]);
	return (x);
}
