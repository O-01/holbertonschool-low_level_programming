#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strchr - 
 *
 *
 *
 */

char *_strchr(char *s, char c)
{
	while (*s != '/0')
	{
		if (*s == c)
			return ((char *)s);

		s++;
	}

	return (NULL);
}
