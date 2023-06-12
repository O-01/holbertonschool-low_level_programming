#include "main.h"

/**
 * _strstr - locates substring n within string h
 * @h: main object string
 * @n: substring we are looking for within h
 * Return: pointer to h if exists, else NULL
 */

char *_strstr(char *h, char *n)
{
	char *x = h;

	while (*x++)
		while (*n++)
			if (*x == *n)
			{
				x++;
				return (x);
			}
	return (0);
}
