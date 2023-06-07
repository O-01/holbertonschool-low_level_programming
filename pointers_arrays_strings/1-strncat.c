#include "main.h"

/**
 *
 *
 *
 *
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
		x++;

	while (y < n && src[y] != src[n])
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	if (n < y)
		dest[x] = '\0';

	return (dest);

}
