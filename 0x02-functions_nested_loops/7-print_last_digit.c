#include "main.h"
#include <stdio.h>

/**
 *print_last_digit- Entry point of the program
 *
 *@i: number to check
 *
 *Return: AAlways 0 (success)
 */

int print_last_digit(int i)
{
	int lastdigit = i % 10;

	if (i < 0)
	{
		printf("%d", -lastdigit);
	}
	else
	{
		printf("%d", lastdigit);
	}
	return (0);
}
