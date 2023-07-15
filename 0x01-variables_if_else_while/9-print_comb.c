#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all single numbers using putchr separated by ,
 *
 * Return: (0)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');	
		}	
		digit++;
	}
	putchar('\n');
	return (0);
}
