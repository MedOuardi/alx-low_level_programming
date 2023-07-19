#include "main.h"

/**
 * main - Entry point
 *
 * Description: program that prints the first 50 Fibonacci
 *		numbers, starting with 1 and 2, followed by a new line.
 *
 * Return: 0 always
 */

int main(void)
{
	int sum = 0;
	int n;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
