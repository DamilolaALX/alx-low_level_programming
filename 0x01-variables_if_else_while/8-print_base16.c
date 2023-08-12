#include <stdio.h>

/**
 *main - Entry point of the program
 *
 *Description: A program that prints all the numbers of base 16 in lowercase,
 *followed by a new line.
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	i = 97;

	while (i <= 102)
	{
		putchar(i);
		i++;
	}
	/* Print new line */
	putchar('\n');

	return (0);
}
