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
		printf("%d\n", (argv + 1) * (argv + 2));

	else
		printf("Error");

	return (0);
}
