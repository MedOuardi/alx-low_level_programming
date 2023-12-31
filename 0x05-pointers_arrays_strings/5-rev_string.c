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
	char temp;

	for (i = 0; i < _strlen(s) / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + _strlen(s) - i - 1);
		*(s + _strlen(s) - i - 1) = temp;
	}
}
