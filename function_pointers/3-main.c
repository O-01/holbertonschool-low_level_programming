#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
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
