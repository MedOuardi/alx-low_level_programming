#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all numbers  in Hexa base using putchr
 *
 * Return: (0)
*/

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit + '0');
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');
	return (0);
}
