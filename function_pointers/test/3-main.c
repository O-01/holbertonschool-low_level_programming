#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * main - print calc of 2 args based on & separated by arithmetic operator
 * @argc: argument count, must be 4
 * @argv: argument vector - el. 1 & 3 must be nos. & 2, valid operator ('sign')
 * Return: 0 upon success, exit codes with error upon unacceptable input
 */

int main(int argc, char **argv)
{
	char *sign = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(sign) == NULL || sign[1])
	{
		printf("Error\n");
		exit(99);
	}

	if ((*sign == '/' || *sign == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(sign)(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
