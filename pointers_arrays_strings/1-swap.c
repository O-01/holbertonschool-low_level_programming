#include "main.h"

/**
 * swap - changes referenced pointer value *n to 98
 * @a: integer value 1
 * @b: integer value 2
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
