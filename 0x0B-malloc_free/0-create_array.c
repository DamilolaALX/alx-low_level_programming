#include "main.h"
#include <stdlib.h>

/**
 * create_array- function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the array of characters
 * @c: the character to initialize the array
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
	{
		/*return NULL if size is 0*/
		return (NULL);
	}
	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
	{
		/*memory allocation failed*/
		return (0);
	}
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';

	return (p);
}

