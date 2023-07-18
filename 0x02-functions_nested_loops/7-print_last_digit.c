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
	_putchar('0' + n % 10);
	return (n % 10);
}
