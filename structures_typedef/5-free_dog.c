#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free memory used by dog data
 * @dog: object dog struct
 * Return: void
 */

void free_dog(dog_t *dog)
{
	if (dog != NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
	}
}
