#include <stdio.h>

/**
 *main- Entry point of the program
 *
 *Description: A program that prints all single digit numbers of base 10
 *starting from 0, followed by a new line.
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	/* initialize i with the ACSII value of 0 */
	int i = 48;

	while (i <= 57)
	{
		putchar(i++);
	}
	/* Print a new line */
	putchar('\n');

	return(0);
}
