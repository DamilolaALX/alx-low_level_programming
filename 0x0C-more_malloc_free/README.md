0x0C-more_malloc_free

DESCRIPTION:

This project is part of the ALX software engineering curriculum and aims to expand your understanding of dynamic memory allocation in C by implementing custom memory allocation and deallocation functions. In this project, we'll introduce additional memory management functions and delve deeper into memory allocation strategies.

REQUIREMENTS:

To run and test the code in this project, you will need:
* A C compiler (e.g., GCC)
* Standard C library

USAGE:

To utilize the custom memory allocation functions in your C program, follow these steps:

Include the main.h header file in your C source file.
#include "main.h"

Use the custom allocation functions more_malloc() and more_calloc() to allocate memory dynamically.
void *ptr = more_malloc(size);

When you're done with the allocated memory, free it using the custom more_free() function.
more_free(ptr);

FILE DESCRIPTIONS
Here's a brief description of the files included in this project:

* main.h - This header file contains function prototypes and necessary includes for custom memory allocation functions.
* 0-malloc_checked.c - A function that allocates memory using malloc.
main.c - An example usage of the custom memory allocation functions in a simple C program.
README.md - This README file with project documentation.

COMPILATION:

To compile the code, use the following command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o my_program

TESTING:

You can test the custom memory allocation functions by running the provided main.c program after compilation. Execute the program with the following command:
./my_program

AUTHOR
This project was developed by:
Adegunle Damilola (Adegunledamiloladaniel@gmail.com) - Lead Developer
