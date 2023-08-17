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
	if (n <= '0')
	{
		_putchar('\n');
	}
	while (n > '0')
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
