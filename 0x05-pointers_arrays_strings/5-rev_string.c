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
 * rev_string - function that prints a string,
 *		in reverse, followed by a new line.
 *
 * @s: control input
 */

void rev_string(char *s)
{
	int i;
	char *temp = *s;

	for (i = 0; i < _strlen(s); i++)
		*(s + i) = *(temp + _stlen(temp) - i - 1);
}
