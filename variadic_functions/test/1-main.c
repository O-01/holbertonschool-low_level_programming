#include <stdlib.h>
#include "variadic_functions.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
	print_numbers(NULL, 4, 304, 76, 87236, 28376);
	return (0);
}
