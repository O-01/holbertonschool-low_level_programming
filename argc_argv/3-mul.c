#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - mult 2 args in argv, max 2 min 2 else Error
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if ((argc - 1) == 2)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	else
		printf("Error\n");

	return (0);
}
