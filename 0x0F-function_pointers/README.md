# [0x0F-function_pointers](https://github.com/DamilolaALX/alx-low_level_programming/0x0F-function_pointers)

This project looks at the concept of function pointers in the C programming language. Function pointers are pointers that point to the memory address of a function rather than pointing to a data value. They provide a way to store and pass around references to functions, allowing for dynamic function calls and more flexible program structures. This repository contains various C source code files that demonstrate the usage of function pointers in different contexts.

## FILES

1. [0-print_name.c](https://github.com/DamilolaALX/alx-low_level_programming/0x0F-function_pointers/blob/master/0-print_name.c)
   - This file contains a C function that takes a function pointer as an argument and uses it to print a name.

2. [1-array_iterator.c](https://github.com/DamilolaALX/alx-low_level_programming/0x0F-function_pointers/blob/master/1-array_iterator.c)
   - This file defines a function that applies a given function to each element of an array.

3. [2-int_index.c](https://github.com/DamilolaALX/alx-low_level_programming/0x0F-function_pointers/blob/master/2-int_index.c)
   - This source file implements a function that searches for an integer in an array and returns the index of the first element for which the search function returns true.

4. [3-main.c](https://github.com/DamilolaALX/alx-low_level_programming/0x0F-function_pointers/blob/master/3-main.c)
   - This is the main program file that demonstrates the usage of function pointers in a simple calculator application.

5. [3-op_functions.c](https://github.com/DamilolaALX/alx-low_level_programming/0x0F-function_pointers/blob/master/3-op_functions.c)
   - This file contains the implementations of various arithmetic operations (addition, subtraction, multiplication, division, and modulus) that will be used in the calculator application.

6. [3-get_op_func.c](https://github.com/DamilolaALX/alx-low_level_programming/0x0F-function_pointers/blob/master/3-get_op_func.c)
   - This source file defines a function that selects the appropriate arithmetic operation function based on the operator passed as an argument.

7. [3-calc.h](https://github.com/DamilolaALX/alx-low_level_programming/0x0F-function_pointers/blob/master/3-calc.h)
   - This header file contains function prototypes and declarations of data structures used in the calculator application.

## USAGE

To compile and run the different programs in this repository, you can use a C compiler such as `gcc`. For example:

gcc -Wall -Werror -Wextra -pedantic prog.c -o prog
./prog

Make sure to compile each program accordingly.

## AUTHOR
This project is authored by [Adegunle Damilola](adegunledamiloladaniel@gmail.com)

Feel free to explore the code and learn more about how function pointers work in C!
