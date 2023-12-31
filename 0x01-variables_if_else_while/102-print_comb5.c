#include <stdio.h>

/**
*main - Entry point of the program.
*
*Description: A program that prints all possible combinations
*of two two-digit numbers.
*
*Return: Always 0 (Success)
*/

int main(void)
{
	/* set variables */
int i, e, g, h, op1, op2;

i = e = g = h = 48;

while (h && g && e && i < 58)
{
	op1 = (h * 10) + g;
	op2 = (e * 10) + i;
	if (op1 < op2)
	{
		/* ensures that each combination is printed only once */
		putchar(h);
		putchar(g);
		putchar(' ');
		putchar(e);
		putchar(i);
		if (h == 57 && g == 56 && e == 57 && i == 57)
			break;
		putchar(',');
		putchar(' ');
	}
	i++;
	e++;
	g++;
	h++;
putchar('\n');
return (0);
}
}
