#include <stdio.h>

/**
 * main - print all arguments
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x = 0;

	if (argc)
		for (; argv[x]; x++)
			printf("%s\n", argv[x]);

	return (0);
}
