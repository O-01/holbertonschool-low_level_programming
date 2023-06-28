#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog of dog_t format
 * @name: name of the new dog
 * @age: age of dog
 * @owner: dog's owner
 * Return: pointer to the new dog, NULL upon failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dawg = 0;

	dawg = malloc(sizeof(dog_t));

	if (dawg == NULL)
		return (NULL);

	dawg->name = name;
	dawg->age = age;
	dawg->owner = owner;

	return (dawg);
}
