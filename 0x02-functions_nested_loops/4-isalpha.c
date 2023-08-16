#include "main.h"
/**
 *_isalpha- Entry point of the program
 *
 * @c: The character to be checked.
 *
 *Description:  a function that checks for alphabetic character.
 *
 *Return: Always 0 (success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
/* c is alphabetic */
	}
	else
	{
		return (0);
/* c is not alphabetic */
	}
}
