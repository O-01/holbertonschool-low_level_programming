#include <stdio.h>

/**
 *
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int x = argv[1];
	int y = argv[2];

	if ((argc - 1) == 2)
		printf("%d\n", x * y);

	else
		printf("Error");

	return (0);
}
