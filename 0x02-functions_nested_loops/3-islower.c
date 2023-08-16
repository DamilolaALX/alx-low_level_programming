#include "main.h"

/**
 *_islower- Entry point of the program
 *
 * @c: The character to be checked.
 *
 *Description: A function that checks for lowercase character.
 *
 *Return: Always 0 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
