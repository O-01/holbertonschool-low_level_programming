#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: string 1
 * @src: string 2
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);

}
