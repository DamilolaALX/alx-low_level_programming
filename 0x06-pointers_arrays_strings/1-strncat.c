#include "main.h"

/**
 * *_strncat- A function that concatenates two strings
 *
 * @dest: the first string
 * @src: the second string
 * @n: bytes to be used from src
 *
 * return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
