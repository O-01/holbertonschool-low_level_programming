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
	unsigned int z = 0;
	char *nam = 0;
	char *own = 0;

	y = _strlen(name) + 1;
	z = _strlen(owner) + 1;

	dawg = malloc(sizeof(dog_t));
	nam = malloc(sizeof(char) * y);
	own = malloc(sizeof(char) * z);

	if (dawg == NULL || nam == NULL || own == NULL)
	{
		free(own);
		free(nam);
		free(dawg);
		return (NULL);
	}

	for (; x < y; x++)
		nam[x] = name[x];

	for (x = 0; x < z; x++)
		own[x] = owner[x];

	dawg->name = nam;
	dawg->age = age;
	dawg->owner = own;

	return (dawg);
}

/**
 * _strlen - calculates length of input string
 * @s1: object string
 * Return: length
 */

int _strlen(char *s1)
{
	unsigned int x = 0;

	while (s1[x])
		x++;

	return (x);
}
