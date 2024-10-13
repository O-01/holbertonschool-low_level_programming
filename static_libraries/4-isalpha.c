#include "main.h"

/**
 * _isalpha - alpha character detection
 * @c: character checked for alpha (A-Za-z)
 * Return: alpha 1, else 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
