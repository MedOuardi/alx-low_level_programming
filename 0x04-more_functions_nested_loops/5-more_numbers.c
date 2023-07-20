#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 *		from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			_putchar(c);
		}
		for (c = '0'; c <= '4'; c++)
		{
			_putchar('1');
			_putchar(c);
		}
		_putchar('\n');
	}
	putchar('\n');
}
