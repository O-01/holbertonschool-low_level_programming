#include "3-calc.h"

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
	int iter = 0;

	if (!s)
		return (NULL);
	while (ops[iter].op && *(ops[iter].op) != *s)
		iter++;
	return (ops[iter].f);
}
