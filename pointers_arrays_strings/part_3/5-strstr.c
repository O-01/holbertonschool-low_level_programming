#include "main.h"

/**
 * _strstr - locates substring n within string h
 * @h: main object string
 * @n: substring we are looking for within h
 * Return: pointer to h if exists, else NULL
 */
char *_strstr(char *h, char *n)
{
	int iter = 0, mark = 0, start = 0;

	if (!n)
		return (h);
	for (; h[iter] != '\0'; iter++)
	{
		if (h[iter] == n[mark])
		{
			mark++;
			if (!start)
				start = iter;
			if (!n[mark])
				return (&h[start]);
		}
		else
			mark = 0, start = 0;
	}
	return ((void *)0);
}
