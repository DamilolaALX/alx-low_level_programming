#include <stdio.h>

/**
 *main - Entry point of the program
 *
 *Description: A program that prints all possible combinations of single-digit
 *numbers.
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if ( i == 58)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	/* print new line */
	putchar('\n');

	return (0);
}
