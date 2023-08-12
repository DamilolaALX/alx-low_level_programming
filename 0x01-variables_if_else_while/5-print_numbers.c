#include <stdio.h>

/**
 *main - Entry point of the program
 *
 *Description: A program that prints all single digit numbers of base 10
 *starting from 0, followed by a new line.
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	/* print numbers from 0 - 9 */
	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	/* Print a new line */
	printf("\n");

	return (0);
}
