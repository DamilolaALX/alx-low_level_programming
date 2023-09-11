#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that free dogs
 * @d: the pointer to the memory to be freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
		/* free allocated memory */
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
}
