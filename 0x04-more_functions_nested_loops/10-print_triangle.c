#include "main.h"

/**
 *print_triangle- Entry point of the program
 *
 *@size: size of the triangle that should be printed
 *
 *Description: A function that prints a triangle in the terminal
 *
 *Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}