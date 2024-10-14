#include "main.h"

/**
 * print_chessboard - obvious
 * @a: array to be printed like chessboard
 */
void print_chessboard(char (*a)[8])
{
	int y = 0, x = 0;

	for (; y < 8; ++y)
	{
		for (x = 0; x < 8; ++x)
			_putchar(a[y][x]);
		_putchar('\n');
	}
}
