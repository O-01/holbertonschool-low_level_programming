#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	char *z;

	if (argc > 1)
	{
		for (; x < argc; x++)
		{
			z = argv[x];

			while (*z)
			{
				if (!isdigit(*z))
				{
					printf("Error\n");
					return (1);
				}

				z++;
			}

			y += atoi(argv[x]);
		}

		printf("%d\n", y);
	}

	else
		printf("0\n");

	return (0);
}
