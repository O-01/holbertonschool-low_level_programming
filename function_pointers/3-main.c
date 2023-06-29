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
	char *sign = 0;
	int x, y, z = 0;

	sign = argv[2];
	x = atoi(argv[1]);
	y = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(sign) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*sign == '/' || *sign == '%') && y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	z = get_op_func(sign)(x, y);

	printf("%d\n", z);

	return (0);
}
