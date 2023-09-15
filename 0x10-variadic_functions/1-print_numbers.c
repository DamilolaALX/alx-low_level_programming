#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers, followed by a new line
 *
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (separator == NULL)
		return;

	va_start(args, n);

	while (i < n)
	{
		int num = va_arg(args, int);

		i++;
		printf("%d", num);

		if (i < n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
