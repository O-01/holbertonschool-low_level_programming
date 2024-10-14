#include "main.h"

/**
 * _strncat - concatenate two strings to with src to length n
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes to which src restricted
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int iter = 0, src_iter = 0;

	for (; dest[iter]; ++iter)
		;
	for (; src_iter < n && src[src_iter]; ++src_iter, ++iter)
		dest[iter] = src[src_iter];
	if (src_iter < n)
		dest[iter] = '\0';
	return (dest);
}
