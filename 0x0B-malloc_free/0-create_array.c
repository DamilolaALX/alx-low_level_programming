#include "main.h"
#include <stdlib.h>

/**
 * create_array- function that creates an array of chars, and initializes it with a specific char.
 *
 * @size: size of the array of characters
 * @c: the characters
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	if ( size = 0)
	{
		/*return NULL if size is 0*/
		return (NULL);
	}
	char *arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		/*memory allocation failed*/
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

