#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 *Description: Determines if a number is positive, or negative, or is zero.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		/* if the condition is true, print the following */
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
		/* if else if condition is true, print the following */
	{
		printf("%d is zero\n", n);
	}
	else
		/* if none of the conditions have been met up till this point */
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
