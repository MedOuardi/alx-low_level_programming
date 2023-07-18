#include "main.h"

/**
 * jack_bauer -  function that prints every minute of the day
 *		of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int hh, mm;

	for (hh = 0; hh < 24; hh++)
	{
		for (mm = 0; mm < 60; mm++)
		{
			_putchar('0' + hh / 10);
			_putchar('0' + hh % 10);
			_putchar(':');
			_putchar('0' + mm / 10);
			_putchar('0' + mm % 10);
			_putchar('\n');
		}
	}
}
