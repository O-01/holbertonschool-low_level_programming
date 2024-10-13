#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: object string
 * Return: <undecided for the moment>
 */
int _atoi(char *input_string)
{
	int iter = 0, sign = 1, done = 0;
	unsigned long out = 0;

	if (input_string[0] == '-')
		sign = -(sign);
	for (; input_string[iter]; ++iter)
	{
		for (; input_string[iter] >= '0' && input_string[iter] <= '9'; ++iter)
			out = (out * 10) + (input_string[iter] - '0'), done = 1;
		if (done)
			break;
	}
	return (out * sign);
}
