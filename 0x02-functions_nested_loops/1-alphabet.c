#include "main.h"

/**
 * print_alphabet- entry point
 *
 * Description : a function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: 0 always
 *
 */


void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
