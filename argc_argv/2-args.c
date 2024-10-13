#include "main.h"

/**
 * main - print all arguments
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int iter = 0;

	for (; argv[iter]; ++iter)
		printf("%s\n", argv[iter]);
	return (0);
}
