#include "main.h"

/**
 * _memset - fills memory s until n positions with b
 * @s: memory chunk object
 * @b: what we fill s with until n positions
 * @n: number of positions of s to fill with b
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int iter = 0;

	for (; iter < n; ++iter)
		s[iter] = b;
	return (s);
}
