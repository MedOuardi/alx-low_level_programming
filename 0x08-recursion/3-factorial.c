#include "main.h"

/**
 * factorial - a function that returns the
 *		factorial of a given number.
 *
 * @n: control input;
 *
 * Return: The factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
