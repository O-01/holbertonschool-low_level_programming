#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	printf("Size dog_t: %ld bytes\n", sizeof(dog_t));
	printf("Float size: %ld bytes\n", sizeof(float));
	printf("Char * size: %ld bytes\n", sizeof(char *));
}
