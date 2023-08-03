#include "main.h"

/**
 * is_prime - Checks if a number is prime using recursion.
 *
 * @n: check input
 * @m: check input
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime(int n, int m)
{
	if (n <= 1)
		return (0);
	if (m >= n)
		return (1);
	if (n % m == 0)
		return (0);
	return (is_prime(n, m + 1));
}

/**
 * is_prime_number  -  function
 *
 * @n: check input
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
