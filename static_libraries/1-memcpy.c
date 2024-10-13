#include "main.h"

/**
 * _memcpy - copy n bytes of src to dest
 * @dest: place where n bytes of src to be copied
 * @src: source, n bytes of which copied to dest
 * @n: amount of src to be copied to dest
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int iter = 0;

	for (; iter < n; ++iter)
		dest[iter] = src[iter];
	return (dest);
}
