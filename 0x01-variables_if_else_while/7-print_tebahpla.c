#include <stdio.h>

/**
 *main- Entry point of the program
 *
 *Description: A program that prints the lowercase alphabet in reverse,
 *followed by a new line.
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');

	return (0);
}
