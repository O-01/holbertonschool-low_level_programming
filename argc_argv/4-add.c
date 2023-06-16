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
	int x = 1;
	int y = 0;

	y = atoi(argv[x]);

	if (argc)
	{
		for (; argv; x++)
		{
			y += atoi(argv[x + 1]);

			if (argc == 0 || y > 57 || y < 48)
			{
				printf("Error\n");
				return (1);
			}
		}

		printf("%d\n", y);
	}

	return (0);
}
