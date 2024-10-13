#include "main.h"

/**
 * _islower - lower case detection
 * @c: letter checked for case
 * Return: lower 1, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
