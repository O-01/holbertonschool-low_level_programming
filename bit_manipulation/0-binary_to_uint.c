#include "main.h"
#include "_pow.c"

/**
 * binary_to_uint - converts binary input string to decimal
 * @input: binary input
 * Return: decimal equivalent, 0 if input is NULL or input contains non-digits
 */
unsigned int binary_to_uint(const char *input)
{
	int x = 0, y = 0;
	unsigned int taker = 0;

	if (!input)
		return (0);
	for (; input[x + 1]; ++x)
		;
	for (; input[y]; ++y)
	{
		if (!(input[y] == '0' || input[y] == '1'))
			return (0);
		taker += (input[y] - 48) * _pow(2, x);
		--x;
	}
	return (taker);
}
