#include <stdio.h>

/**
 * main - prints number of arguments
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", (argc - 1));

	return (0);
}
