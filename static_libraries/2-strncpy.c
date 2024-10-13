#include "main.h"

/**
 * _strncpy - copy string from src to dest to n bytes
 * @dest: destination for string
 * @src: source string
 * @n: number of bytes of src to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int iter = 0;

	for (; iter < n && src[iter]; ++iter)
		dest[iter] = src[iter];
	if (iter < n)
		dest[iter] = '\0';
	return (dest);
}
