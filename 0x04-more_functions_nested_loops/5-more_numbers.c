#include "main.h"

/**
 *more_numbers- Entry point of the program
 *
 *Description: Prints 10 times the numbers from 0 - 14
 *
 *return: void
 */

void more_numbers(void)
{
    int i, l;
	
	for (l = 0; l < 10; l++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
