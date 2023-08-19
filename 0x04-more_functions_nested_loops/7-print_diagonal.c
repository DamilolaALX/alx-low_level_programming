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

	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
