#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: string 1
 * @src: string 2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int iter = 0, src_iter = 0;

	for (; dest[iter]; ++iter)
		;
	for (; src[src_iter]; ++src_iter, ++iter)
		dest[iter] = src[src_iter];
	dest[iter] = '\0';
	return (dest);
}
