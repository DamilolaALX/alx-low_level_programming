#include "main.h"

/**
 * is_prime_number- A function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 *
 * @n: the prime number to check
 *
 * Return: 1 if thee integer is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	int o;

	if (n <= 1)

		return (0);

	for (o = 2; o * o <= n; o++)

		if (o % 2 == 0)

			return (0);

	return (1);
}
