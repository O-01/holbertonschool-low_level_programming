#ifndef dog_h
#define dog_h

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog attributes
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: pretty much a struct to hold the attributes of a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
