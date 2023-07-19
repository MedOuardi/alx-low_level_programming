#include "main.h"
/**
 * print_times_table -  function that prints the
 *			n times table, starting with 0.
 *			0 < n < 15
 *
 * @n : control input
 */
void print_times_table(int n)
{
	int prd, i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				prd = i * j;
				if (prd < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (prd >= 10 && prd < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + prd / 10);
				}
				else
				{
					_putchar(' ');
					_putchar('0' + prd / 100);
					_putchar('0' + (prd / 10) % 10);
				}
				_putchar('0' + prd % 10);
			}
			_putchar('\n');
	}
}
