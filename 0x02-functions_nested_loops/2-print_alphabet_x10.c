#include "main.h"

/**
 *print_alphabet_x10- Entry point of the program
 *
 *Description: A function that prints 10 times the alphabet, in lowercase,
 *followed by a new line.
 */

void print_alphabet_x10(void)
{
	char ltr;
	int i;
	i = 0;
	
	while (i < 10)
	{
		for (ltr = 'a'; ltr <= 'z'; ltr++)
		{
			_putchar(ltr);
		}
		_putchar('\n');
		i++;
	}
}
