#include "main.h"

/**
 *
 *
 *
 *
 */

unsigned int _strspn(char *s1, char *s2)
{
	unsigned int x;
	unsigned int y;
	unsigned int z = 0;

	for (x = 0; s1[x] != '\0'; x++)
		for (y = 0; s2[y] != '\0'; y++)
			if (z < x)
				if (s1[x] == s2[y])
					z++;

	return (z);
}
