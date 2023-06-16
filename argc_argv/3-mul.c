#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	if ((argc - 1) == 2)
		printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));

	else
		printf("Error");

	return (0);
}
