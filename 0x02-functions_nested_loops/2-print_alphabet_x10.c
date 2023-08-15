#include "main.h"

/**
 *print_alphabet_x10- Entry point of the program
 *
 *Description: A function that prints 10 times the alphabet, in lowercase,
 *followed by a new line.
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;
	i = '0';

	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		i++;
	}
}
