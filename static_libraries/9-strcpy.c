#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies string src including \0 to location to which dest points
 * @src: string to copy with its \0
 * @dest: destination
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];

	dest[a] = '\0';

	return (dest);
}
