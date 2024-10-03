#include "lists.h"

/**
 * hare_tortoise - print given string before execution of main
 */
void __attribute__ ((constructor)) hare_tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
