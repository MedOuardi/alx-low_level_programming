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
 * puts2 - function that prints a string,
 *		in reverse, followed by a new line.
 *
 * @s: control input
 */

void puts2(char *s)
{
	int i;
	char temp;

	for (i = 0; i < _strlen(s); i++)
		if (i % 2 == 0)
			_putchar(*(s + i));
	_putchar('\n');
}
