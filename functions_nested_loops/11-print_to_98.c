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

	for (o = n; o <= 98; o++)
	{
		if (o < 98)
		{
			printf("%d, ", o);
		}
		else
		{
			printf("%d", o);
		}
	}

	for (o = n; o >= 98; o--)
	{
		if (o > 98)
		{
			printf("%d, ", o);
		}
		else
		{
			printf("%d", o);
		}
	}
}
