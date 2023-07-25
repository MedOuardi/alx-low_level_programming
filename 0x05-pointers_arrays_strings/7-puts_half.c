#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 *
 * @s: control input
 *
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}


/**
 * puts_half - function that prints a string,
 *		in reverse, followed by a new line.
 *
 * @s: control input
 */

void puts_half(char *s)
{
	int i, length = _strlen(s);

	for (i = (length + 1) / 2 ; i < length; i++)
		_putchar(*(s + i));
	_putchar('\n');
}
