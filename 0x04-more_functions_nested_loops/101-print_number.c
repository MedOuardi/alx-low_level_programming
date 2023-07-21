#include "main.h"

/**
 * power - Calculate the power of a number
 *
 * @base: The base number
 * @exponent: The exponent to raise the base to
 *
 * Return: The result of the power operation
 */

int power(int base, int exponent)
{
	int result = 1;
	int i;

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}

	return (result);
}

/**
 * print_number - function that prints an integer.
 * @n: check input
 *
 */


void print_number(int n)
{
	int cpy = n;
	int count = 0;
	int i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (cpy / 10 != 0)
	{
		count++;
		cpy = cpy / 10;
	}
	for (i = count; i >= 0; i--)
	{
		_putchar('0' + n / power(10, i));
		n = n % (power(10, i));
	}
	_putchar('\n');
}
