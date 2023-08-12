#include <stdio.h>

/**
 *main - Entry point of the program
 *
 *Description: A program that prints the alphabet in lowercase, followed by a
 *new line.
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		/* Print all the letters except q and e */
		if ((alphabet != 'e') && (alphabet != 'q'))
		putchar(alphabet);
		alphabet++;
	}
	/* Print a new line */
	putchar('\n');

	return (0);
}
