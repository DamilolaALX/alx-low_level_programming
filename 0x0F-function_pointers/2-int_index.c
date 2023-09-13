#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @size: number of elements in array
 * @cmp: a pointer to the function to be used to compare values
 * @array: array containing the number
 *
 * Return: Always 0 ( successs)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		/* check for invalid inputs */
		return (-1);
	}

	while (i < size)
	{
		i++;
		if (cmp(array[i]))
			/* return the index where the integer was found */
			return (i);
	}
	/* return -1 if no element matches */
	return (-1);
}
