#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum
 * of all its parameters
 * @n: number of arguments passed to the function
 * Return: the sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i = 0;
	va_list args;

	if (n == 0)
		return (0);

	/* initialize the va_list and start processing arguments */
	va_start(args, n);

	while (i < n)
	{
		/* Get the next argument from the llist */
		int current_arg = va_arg(args, int);

		sum += current_arg;
		i++;
	}

	/* clean up the va_list */
	va_end(args);
	return (sum);
}
