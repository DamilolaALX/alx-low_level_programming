#include "main.h"

/**
 *print_numbers- Entry point of the program
 *
 *Description: prints numbers from 0 to 9
 *
 *return: void
 */

void print_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
