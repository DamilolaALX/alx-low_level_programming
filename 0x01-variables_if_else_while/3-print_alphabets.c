#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 *Description: A program that prints the alphabet in lowercase, and then in
 *upperrcase, followed by a new line.
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	/* Print lowercase alphabet */

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	/* Print uppercase alphabet */
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	/* Print new line */
	putchar('\n');

	return (0);
}
