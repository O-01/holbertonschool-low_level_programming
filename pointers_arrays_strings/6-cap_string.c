#include "main.h"

/**
 * cap_string - capitalizes first letter of each word in a string
 * @s1: string, first letters of the words of which we capitalize
 * Return: s1
 */

char *cap_string(char *s1)
{
	int x;

	while (s1[x])
	{
		for (x = 0; s1[x] != '\0'; x++)
		{
			if (s1[x] >= 'a' && s1[x] <= 'z')
				if (s1[x - 1] == '\t' ||
				s1[x - 1] == '\n' ||
				s1[x - 1] == ',' ||
				s1[x - 1] == ';' ||
				s1[x - 1] == '.' ||
				s1[x - 1] == '?' ||
				s1[x - 1] == '(' ||
				s1[x - 1] == ')' ||
				s1[x - 1] == '{' ||
				s1[x - 1] == '}' ||
				s1[x - 1] == ' ' ||
				s1[x - 1] == '!' ||
				s1[x - 1] == '"')
					s1[x] -= 32;
	}

		x++;

	}

	s1[x] = '\0';

	return (s1);
}
