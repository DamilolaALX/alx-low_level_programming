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
	int last_digit = i % 10;

	printf("%d", last_digit);
	printf("%d", last_digit);
	
	return (last_digit);
}
