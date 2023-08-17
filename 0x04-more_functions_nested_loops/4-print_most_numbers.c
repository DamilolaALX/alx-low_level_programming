#include "main.h"

/**
 *print_most_numbers- Entry point of the program
 *
 *Description: A function that prints numbers from 0 to 9 excluding 2 and 4
 *
 *return: void
 */

void print_most_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
		n++;
	}
	_putchar('\n');
}
