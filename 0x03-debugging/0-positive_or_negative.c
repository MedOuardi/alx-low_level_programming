#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: positive or negative or zero
 *
 * Return: (0)
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
}
