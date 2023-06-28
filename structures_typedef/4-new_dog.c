#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _strlen(char *s1);

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
	nam = malloc(sizeof(char) * (_strlen(name) + 1));
	own = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (dawg == NULL || nam == NULL || own == NULL)
	{
		free(own);
		free(nam);
		free(dawg);
		return (NULL);
	}

	for (; name[x]; x++)
		nam[x] = name[x];

	for (; owner[y]; y++)
		own[y] = owner[y];

	dawg->name = nam;
	dawg->age = age;
	dawg->owner = own;

	return (dawg);
}

int _strlen(char *s1)
{
	unsigned int x = 0;

	while (s1[x])
		x++;

	return (x);
}
