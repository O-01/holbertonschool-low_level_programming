#include <stdio.h>

/**
 *
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int x = 0;

	if (argc)
		while (argv[x])
			x++;

	if (x < 2 || x > 2)
		printf("Error");
	else
		printf("%d\n", (*(argv + 1) * *(argv + 2)]));

	return (0);
}
