#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as a parameter on each element of an array.
 * @array: The  array to execute
 * @@size: size of the array
 * @action: pointer to the function needed
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		/* check for null pointers */
	{
		return;
	}
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}


