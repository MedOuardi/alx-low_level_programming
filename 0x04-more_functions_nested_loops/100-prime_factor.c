#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int i, LargestPrime;
	long int n = 612852475143;

	for (i = 2; i <= sqrt(n); i++)
	{
		while (n % i == 0)
		{
			n = n / i;
			LargestPrime = i;
		}
	}
	printf("%d\n", LargestPrime);
	return (0);

}
