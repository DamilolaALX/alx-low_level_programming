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
	char ln = '0', n;

	while (ln <= '10')
	{
		n = '0';

		while (n <= '14')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		ln++;
	}
	return (void);
}
