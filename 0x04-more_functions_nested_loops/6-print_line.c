#include "main.h"

/**
 *print_line- Entry point of the program
 *
 *@n: number of times '_' is drawn
 *
 *Description: Draws a straight line in the terminal
 *
 *Return: void
 */

void print_line(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
