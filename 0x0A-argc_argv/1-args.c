#include <stdio.h>
#include "main.h"

/**
 * main- a program that prints the number of arguments passed into it.
 *
 * @argc: string count
 * @argv: void
 *
 * return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	/* subtract 1 to exclude program name*/
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
