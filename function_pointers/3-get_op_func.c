#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - supplies arithmetic func if input matches ops variant
 * @s: input 'sign' to be checked against variants in ops
 * Return: function corr. to sign, if found - NULL otherwise
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (s != NULL)
		while (ops[i].op != NULL && *(ops[i].op) != *s)
			i++;

	return (ops[i].f);
}
