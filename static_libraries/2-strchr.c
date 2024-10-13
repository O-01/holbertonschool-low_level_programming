#include "main.h"

/**
 * _strchr - locates character c within string s
 * @s: object string
 * @c: character we search
 * Return: s beginning at c, 0 if not found
 */
char *_strchr(char *s, char c)
{
	while (*s++)
		if (*s == c)
			return (s);
	return (0);
}
