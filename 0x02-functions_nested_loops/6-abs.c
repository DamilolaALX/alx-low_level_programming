#include "main.h"

/**
 *_abs- Entry point of the program
 *
 *@n: integer to check
 *
 *Description: Computes the absolute value of an integer
 *
 *Return: Always 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
