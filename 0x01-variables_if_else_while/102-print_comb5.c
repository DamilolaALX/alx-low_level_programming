#include <stdio.h>

/**
 *main - Entry point of the program
 *
 *Description: A program that prints all possible combinations of single-digit
 *numbers.
 *
 *Return: Always 0 (Success)
 */
 
int putchar(int c);

void print_combinations()
{
    int i = 0;
    while (i <= 99)
    {
        int j = i;
        while (j <= 99)
	{
            putchar(i / 10 + 48);
            putchar(i % 10 + 48);
            putchar(' ');
            putchar(j / 10 + 48);
            putchar(j % 10 + 48);

            if (j != 99 || i != 99)
	    {
                putchar(',');
                putchar(' ');
            }

            j++;
        }
        i++;
    }
}

int main(void)
{
    print_combinations();
    return 0;
}
