#include "main.h"

/**
 * main- entry point
 *
 * Description: a program that prints _putchar, followed by a new line.
 *
 * Return: 0 always
 *
 */

int main(void)
{
	char ch[] = "_putchar";
	int i = 0;

	for (i = 0; i <= 7; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');

	return (0);
}
