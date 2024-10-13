#include "main.h"

/**
 * _abs - compute absolute value of integer
 * @num: number for absoluteness verification
 * Return: absolute value of num
 */
int _abs(int num)
{
	if (num < 0)
		num *= -1;
	return (num);
}
