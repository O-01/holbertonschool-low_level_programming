#include "main.h"

/**
 * _isupper - checks if character is uppercase or lowercase
 * @c: input checked for uppercaseness
 * Return: 1 if upper, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
