#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number, calculates its
 * last digit, and prints messages based on the value of the last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lgtn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* calculate the last digit of n*/
	lgtn = n % 10;

	if (lgtn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lgtn);
	}
	else if (lgtn == 0)
	{
		printf("Last digit of %d is %d\n", n, lgtn);
	}
	else if ((lgtn < 6) && (lgtn != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lgtn);
	}
	return (0);
}
