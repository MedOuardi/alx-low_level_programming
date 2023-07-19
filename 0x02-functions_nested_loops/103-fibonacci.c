#include "main.h"

/**
 * main - entry point
 *
 * Description: a program that finds and prints the sum of
 *		the even-valued terms, followed by a new line
 *		without exceding 4.000.000
 * Return: 0 Always
 */

int main(void)
{
	float total = 0;
	unsigned long fib1 = 0, fib2 = 1, sum;

	do {
		sum = fib1 + fib2;
		if (sum % 2 == 0)
			total += sum
		fib1 = fib2;
		fib2 = sum;
	} while (sum < 4000000);
	printf("%.0f\n", total);
	return (0);
}
