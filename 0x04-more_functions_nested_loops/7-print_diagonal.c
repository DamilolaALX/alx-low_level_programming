#include "main.h"

/**
 *print_diagonal- Entry point of the program
 *
 *@n:number of times / should be printed
 *
 *Description: A function that draws a diagonal line in the terminal
 *
 *Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++, _putchar('\n'))
	{
		for (j = 0; j < i; j++, _putchar(' '))
		{
			_putchar(' ');
		}
		_putchar('\\');
	}
}
