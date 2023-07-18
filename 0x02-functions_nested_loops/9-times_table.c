#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int num, multi, prd;

	for (num = 0; num < 10; num++)
	{
		_putchar('0');
		for (multi = 1; multi < 10; multi++)
		{
			_putchar(',');
			_putchar(' ');
			prd = num * multi;

			if (prd <= 9)
				_putchar(' ');
			else
				_putchar('0' + prd / 10);
			_putchar('0' + prd % 10);
		}
		_putchar('\n');
	}
}
