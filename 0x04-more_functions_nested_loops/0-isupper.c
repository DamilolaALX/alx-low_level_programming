#include "main.h"

/**
 *_isupper- Entry point of the program
 *
 *@c: character to check
 *
 *Description: checks for uppercase character
 *
 *Return: Always 0 (successs)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
