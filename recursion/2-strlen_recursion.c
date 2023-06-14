#include "main.h"

/**
 * _strlen_recursion - find string length using recursion
 * @s: object string
 * Return: string length value
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return(1 + _strlen_recursion(s + 1));
	else
		return (0);
}
