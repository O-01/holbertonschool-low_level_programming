#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds argv args
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x = 0;
	int y = 0;
	int z = 0;

	y = atoi(argv[x]) + atoi(argv[x + 1]);
	z = atoi(argv[x]);

	if (argc)
	{
		for (; argv; x++)
		{
			z += 1;

			if ((argc - 1) == 0 || z < '0' || z > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		printf("%d\n", z);
	}

	return (0);
}
