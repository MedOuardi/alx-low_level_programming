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
 * _strcpy - function that prints a string,
 *		in reverse, followed by a new line.
 *
 * @dest: control input
 * @src: control input
 *
 * Return: char *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		*(dest + i) = *(src + i);
	return (dest);
}
