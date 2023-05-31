#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers until 98 from n
 * @n: origin number to display numbers until 98
 *
 * Return: 0
 *
 */

void print_to_98(int n)
{
	int o;

	if (n != 98)
	{
		for (o = n; o <= 98; o++)
		{
			if (o < 98)
			{
				printf("%d, ", o);
			}
			else if (o == 98)
			{
				printf("%d\n", o);
			}
		}
		for (o = n; o >= 98; o--)
		{
			if (o > 98)
			{
				printf("%d, ", o);
			}
			else if (o == 98)
			{
				printf("%d\n", o);
			}
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
