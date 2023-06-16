#include <stdio.h>

/**
 *
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	if ((argc - 1) == 2)
		printf("%d\n", (int *)argv[1] * (int *)argv[2]);

	else
		printf("Error");

	return (0);
}
