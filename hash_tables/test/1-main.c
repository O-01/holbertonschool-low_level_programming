#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	char *s;

	s = "cisfun";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "Don't forget to tweet today";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "98";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "USA";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "France";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "UK";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "Spain";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "Germany";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "China";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "Russia";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "Bahrain";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "Canada";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "Brazil";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "Sweden";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "Iceland";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "Japan";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	s = "Australia";
	printf("%lu\n", hash_djb2((unsigned char *)s));

	return (EXIT_SUCCESS);
}
