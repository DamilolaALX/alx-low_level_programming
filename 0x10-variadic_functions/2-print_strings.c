#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: separator between strings
 * @n: number of arguments
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;

	va_list list;

	va_start(list, n);

	while (i < n)
	{
		str = va_arg(list, char *);

		if (!str)
			str = "(nil)";

		printf("%s", str);

		if (i < n - 1 && separator)
			printf("%s", separator);

		i++;
	}
	printf("\n");
	va_end(list);
}
