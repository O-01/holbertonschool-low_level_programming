#include "main.h"

/**
 * swap_int - changes referenced pointer value *n to 98
 * @a: integer value 1
 * @b: integer value 2
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
