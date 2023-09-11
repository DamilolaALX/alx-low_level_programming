#include <stdio.h>

/**
 * main- A program that prints the name of the file it was
 * compiled from followed by a new line.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("This program was compiled from %s\n", __FILE__);
	return (0);
}
