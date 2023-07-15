#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all single numbers using putchr and int variable
 *
 * Return: (0)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
