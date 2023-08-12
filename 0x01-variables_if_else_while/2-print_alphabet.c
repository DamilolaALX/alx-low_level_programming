#include <stdio.h>

int main()
{
    char letter = 'a';
/* while the condition is true, print the following */
    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }
/* print a new line*/
    putchar('\n');

    return 0;
}
