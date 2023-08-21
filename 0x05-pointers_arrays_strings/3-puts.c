#include "main.h"

/**
 *_puts- puts a string followed by a newline to th standard output
 *
 *@str: the string
 *
 *Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
