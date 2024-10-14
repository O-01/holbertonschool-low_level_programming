#include "main.h"

/**
 * _strcmp - compares 2 strings & shows value upon reaching difference
 * @s1: string 1
 * @s2: string 2
 * Return: value of difference
 */
int _strcmp(char *s1, char *s2)
{
	int iter = 0, cmp = 0;

	for (; s1[iter] == s2[iter] && (s1[iter] || s2[iter]); ++iter)
		;
	cmp = s1[iter] - s2[iter];
	return (cmp);
}
