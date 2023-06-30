#include "function_pointers.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - addition operation
 * @a: input 1
 * @b: input 2
 * Return: sum
 */

int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - subtraction operation
 * @a: input 1
 * @b: input 2
 * Return: sum
 */

int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - multiplication operation
 * @a: input 1
 * @b: input 2
 * Return: sum
 */

int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - division operation
 * @a: input 1
 * @b: input 2
 * Return: sum
 */

int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
 * op_mod - modulo/int. remainder operation
 * @a: input 1
 * @b: input 2
 * Return: sum
 */

int op_mod(int a, int b)
{
	return ((a) % (b));
}
