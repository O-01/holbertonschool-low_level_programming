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
		printf("%d", (argc - 1));

	return (0);
}
