#include "main.h"
#include "_pow.c"

/**
 * binary_to_uint - converts binary input string to decimal
 * @input: binary input
 * Return: decimal equivalent, 0 if input is NULL or input contains non-digits
 */

unsigned int binary_to_uint(const char *input)
{
	unsigned int booger = 0;
	int x = 0, y = 0;
	unsigned int taker = 0;

	if (input == NULL)
		return (0);

	for (; input[x]; x++)
		;

	x--;

	for (; input[y]; y++)
	{
		if (!isdigit(input[y]))
			return (0);
		booger = (input[y] - 48) * _pow(2, x);
		taker += booger;
		x--;
	}

	return (taker);
}
