#include "function_pointers.h"

/**
 * print_name - prints input name using function pointer
 * @name: input name to print
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
