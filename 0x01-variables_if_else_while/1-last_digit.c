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
	int lastdigitofn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* calculate the last digit of n*/
	lastdigitofn = n % 10;
	
	if (lastdigitofn > 5)
	{
		printf("the last digit of %d is %d and is greater than 5\n", n, lastdigitofn);
	}
	else if (lastdigitofn == 0)
	{
		printf("the last digit of %d is %d\n", n, lastdigitofn);
	}
	else if ((lastdigitofn < 6) && (lastdigitofn != 0))
	{
		printf("the last digit of %d is %d and is less than 6 and not 0\n", n, lastdigitofn);
	}
	return (0);
}
