#include <stdio.h>
/**
 *main - Entry point of the program.
 *
 *Description: Prints the alphabet in lowercase, followed by a new line
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	char letter = 'a';
/* while the condition is true, print the following */
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
/* print a new line*/
	putchar('\n');

	return (0);
}
