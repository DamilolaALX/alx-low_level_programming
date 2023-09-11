#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: pointer to the struct dog to initialize
 * @name: name of the variable
 * @age: age of the variable
 * @owner: owner of the variable
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
