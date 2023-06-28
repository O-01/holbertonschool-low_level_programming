#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog of dog_t format
 * @name: name of the new dog
 * @age: age of dog
 * @owner: dog's owner
 * Return: pointer to the new dog, NULL upon failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dawg;
	unsigned int x = 0;
	unsigned int y = 0;

	dawg = malloc(sizeof(dog_t));

	if (dawg == NULL)
	{
		free(dawg);
		return (NULL);
	}

	dawg->name = malloc(sizeof(char) * (strlen(name) + 1));

	if (dawg->name == NULL)
	{
		free(dawg->name);
		free(dawg);
	}

	for (; name[x]; x++)
		dawg->name[x] = name[x];

	dawg->age = age;

	dawg->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (dawg->owner == NULL)
	{
		free(dawg->owner);
		free(dawg->name);
		free(dawg);
	}

	for (; owner[y]; y++)
		dawg->owner[y] = owner[y];

	return (dawg);
}
