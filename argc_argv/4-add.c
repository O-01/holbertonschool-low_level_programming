#include "main.h"
#include <ctype.h>

/**
 * main - adds argv args
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int iter = 1, sum = 0;
	char *c;

	if (argc < 2)
		return (printf("0\n"), 0);
	for (; iter < argc; ++iter, sum += atoi(argv[iter]))
		for (c = argv[iter]; *c; ++c)
			if (!isdigit(*c))
				return (printf("Error\n"), 1);
	printf("%d\n", sum);
	return (0);
}
