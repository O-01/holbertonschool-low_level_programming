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

	while (y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	if (y < n)
		dest[x] = '\0';

	return (dest);

}
