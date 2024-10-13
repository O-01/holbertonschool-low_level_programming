#include "dog.h"

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
	dog_t *dog = NULL;
	unsigned int iter = 0;
	unsigned int name_len = _strlen(name) + 1, owner_len = _strlen(owner) + 1;
	char *dog_name = 0;
	char *dog_owner = 0;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	dog_name = malloc(sizeof(char) * name_len);
	if (!dog_name)
		return (free(dog), dog = NULL);
	dog_owner = malloc(sizeof(char) * owner_len);
	if (!dog_owner)
		return (free(dog_name), dog_name = NULL, free(dog), dog = NULL);
	for (; iter < name_len; ++iter)
		dog_name[iter] = name[iter];
	for (iter = 0; iter < owner_len; ++iter)
		dog_owner[iter] = owner[iter];
	dog->name = dog_name;
	dog->age = age;
	dog->owner = dog_owner;
	return (dog);
}

/**
 * _strlen - calculates length of input string
 * @s1: object string
 * Return: length
 */
int _strlen(char *s1)
{
	unsigned int iter = 0;

	for (; s1[iter]; ++iter)
		;
	return (iter);
}
