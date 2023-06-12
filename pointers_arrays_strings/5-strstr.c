#include "main.h"

/**
 * _strstr - locates substring n within string h
 * @h: main object string
 * @n: substring we are looking for within h
 * Return: pointer to h if exists, else NULL
 */

char *_strstr(char *h, char *n)
{
	int x = 0;
	int y = 0;
	int z = 0;

	if (n[x] == '\0')
		return (&h[z]);

	for (x = 0; h[x] != '\0'; x++)
	{
		if (h[x] == n[y])
		{
			y++;
			if (z == 0)
				z = x;
			if (n[y] == '\0')
				return (&h[z]);
		}
		else
		{
			y = 0;
			z = 0;
		}
	}

	return (0);
}
