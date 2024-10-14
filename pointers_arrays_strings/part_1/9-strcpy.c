#include "main.h"

/**
 * *_strcpy - copies string src including \0 to location to which dest points
 * @src: string to copy with its \0
 * @dest: destination
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int iter = 0;

	for (; src[iter]; ++iter)
		dest[iter] = src[iter];
	dest[iter] = '\0';
	return (dest);
}
