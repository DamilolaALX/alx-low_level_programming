#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: first string
 * @s2: Second string
 *
 * Return: the difference between strings
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int d = 0;

	while (s1[i] != '\0' && d == 0)
	{
		d = s1[i] - s2[i];
		i++;
	}
	return (d);
}
