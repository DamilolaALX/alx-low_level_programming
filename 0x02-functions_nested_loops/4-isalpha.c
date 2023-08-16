#include "main.h"
/**
 *_isalpha- Entry point of the program
 *
 *Description:  a function that checks for alphabetic character.
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return 1;
/* c is alphabetic */
	}
	else
	{
		return 0;
/* c is not alphabetic */
	}
}
