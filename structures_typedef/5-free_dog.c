#include "dog.h"

/**
 * free_dog - free memory used by dog data
 * @dog: object dog struct
 */
void free_dog(dog_t *dog)
{
	if (!dog)
		return;
	free(dog->owner), dog->owner = NULL;
	free(dog->name), dog->name = NULL;
	free(dog), dog = NULL;
}
