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
	int x;

	if (*src != '\0')
		for (x = 0; x < n; x++)
			dest[x] = src[x];

	return (dest);
}
