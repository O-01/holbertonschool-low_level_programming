#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: object string
 *
 * Return: <undecided for the moment>
 */

int _atoi(char *s)
{
	int a;
	int p = 1;
	int la = 0;
	unsigned int c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{

		if (s[a] == '-')
			p = -(p);

		while (s[a] >= '0' && s[a] <= '9')
		{
			c = (c * 10) + (s[a] - '0');
			a++;
			la = 1;
		}

		if (la == 1)
			break;

	}

	return (c * p);
}
