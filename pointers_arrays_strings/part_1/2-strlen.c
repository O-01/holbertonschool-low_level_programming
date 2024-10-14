#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string, number of characters of which we are counting
 * Return: number of characters
 */
int _strlen(char *s)
{
	int iter = 0;

	for (; s[iter]; ++iter)
		;
	return (iter);
}
