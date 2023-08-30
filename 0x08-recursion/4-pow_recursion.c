#include "main.h"

/**
 * _pow_recursion- a function that returns
 * the value of x raised the power of y
 *
 * @x: the integer
 * @y: the power
 *
 * Return: the value of x raised to the power y
 */

int _pow_recursion(int x, int y)
{
	/* if y is less than 0 return -1*/
	if (y < 0)
		return (-1);
	/* base case*/
	else if (y == 0)
		return (1);
	else
	return (x * _pow_recursion(x, y - 1));
}
			
