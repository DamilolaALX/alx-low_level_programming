#include "main.h"

/**
 *print_alphabet- prints the alphabets
 *
 *Description: A function that prints the alphabet, in lowercase, followed
 *by a new line.
 *
 *Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
