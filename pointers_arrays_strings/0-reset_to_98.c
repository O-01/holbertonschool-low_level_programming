#include "main.h"

/**
 * reset_to_98 - changes referenced pointer value *n to 98
 * @n: pointer in question
 *
 * Return: 0
 *
 */

void reset_to_98(int *n)
{
	int *s = &*n;

	*s = 98;
}
