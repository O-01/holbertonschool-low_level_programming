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
	char *nam = 0;
	char *own = 0;

	dawg = malloc(sizeof(dog_t));

	if (dawg == NULL)
	{
		free(dawg);
		return (NULL);
	}

	nam = malloc(sizeof(char) * (strlen(name) + 1));

	if (nam == NULL)
	{
		free(nam);
		free(dawg);
		return (NULL);
	}

	for (; name[x]; x++)
		nam[x] = name[x];

	own = malloc(sizeof(char) * (strlen(owner) + 1));

	if (own == NULL)
	{
		free(own);
		free(nam);
		free(dawg);
		return (NULL);
	}

	for (; owner[y]; y++)
		own[y] = owner[y];

	dawg->name = nam;
	dawg->age = age;
	dawg->owner = own;

	return (dawg);
}
