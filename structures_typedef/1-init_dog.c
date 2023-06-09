#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes dog attributes based on struct dog
 * @d: dog in question
 * @name: name
 * @age: age
 * @owner: owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
