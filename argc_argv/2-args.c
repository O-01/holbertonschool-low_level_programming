#include <stdio.h>

/**
 * main - print all arguments
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc)
		while (argv)
		{
			printf("%s\n", argv);
			argv++;
		}
	return (0);
}
