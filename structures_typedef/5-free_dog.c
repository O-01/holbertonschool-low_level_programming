#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
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
