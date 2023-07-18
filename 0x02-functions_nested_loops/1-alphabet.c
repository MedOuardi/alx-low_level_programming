#include "main.h"

/**
 * main- entry point
 *
 * Description:a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0 always
 *
 */

void print_alphabet(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for (i = 0; i <= 25; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
}
