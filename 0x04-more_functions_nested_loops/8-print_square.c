#include "main.h"

/**
 *print_square- Entry point of the program
 *
 *@size: the size of the square that should be printed
 *
 *Description: A function that draws a square in the terminal
 *
 *Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');

			for (j = 2; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
