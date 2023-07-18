#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @n: controle input
 *
 * Return:  the value of the last digit
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n >= 0)
		lastDigit = n % 10;
	else
		lastDigit = -n % 10;

	_putchar('0' + lastDigit);
	return (lastDigit);
}
