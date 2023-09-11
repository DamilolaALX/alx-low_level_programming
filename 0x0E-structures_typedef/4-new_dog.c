#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - A function that creates a new dog
 * @name: name of the dog
 * @age: age of the new dog
 * @owner: owner of the dog
 *
 * Return: A pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* allocate memory for the new dog struct */
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = strdup(name);
	if (newDog->name == NULL)
	{
		free(newDog);
	}
	newDog->owner = strdup(owner);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
	free(newDog);
	return (NULL);
	}
	newDog->age = age;
	return (newDog);
}
