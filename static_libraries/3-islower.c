#include "main.h"

/**
 * _islower - lower case detection
 * @c: letter checked for case
 *
 * Return: lower 1, else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
