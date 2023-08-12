#include <stdio.h>

/**
 *main - Entry point of the program
 *
 *Description: A program that prints all possible combinations of single-digit
 *numbers.
 *
 *Return: Always 0 (Success)
 */

void putchar_twice(int num)
{
    putchar('0' + num / 10);
    putchar('0' + num % 10);
}

int main()
{
    int i, j;

    for (i = 0; i <= 99; i++)
    {
        for (j = i; j <= 99; j++)
	{
            putchar_twice(i);
            putchar(' ');
            putchar_twice(j);
            
            if (j != 99 || i != 99)
	    {
                putchar(',');
                putchar(' ');
	    }
        }
    }

    return (0);
}
