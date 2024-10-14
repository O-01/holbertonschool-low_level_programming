#include "main.h"

/**
 * rev_string - prints string from pointer str, but backwards
 * @s: pointer to string we are to print
 */
void rev_string(char *s)
{
	int iter = 0, mark = 0;
	char c;

	if (!s)
		return;
	for (; s[iter + 1]; ++iter)
		;
	for (; mark < iter; ++mark, --iter)
	{
		c = s[iter];
		s[iter] = s[mark];
		s[mark] = c;
	}
}
