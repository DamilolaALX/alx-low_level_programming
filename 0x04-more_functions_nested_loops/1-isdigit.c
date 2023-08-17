#include "main.h"

/**
 *_isdigit- Entry point of the program
 *
 *@c: character to check
 *
 *Description: A fuction that checks for a digit
 *
 *Return: 1 if condition is true, 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
		/* c is a digit */
	}
	else
	{
		return (0);
		/* c is not a digit */
	}
}
