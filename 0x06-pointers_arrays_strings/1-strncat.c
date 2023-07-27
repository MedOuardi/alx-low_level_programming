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
 * _min : fonction that return minimum of two numbers
 *
 * @a: control input
 * @b: control input
 *
 * Return: minimum 
 */

int _min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}


/**
 * _strncat - function that prints a string,
 *		in reverse, followed by a new line.
 *
 * @dest: control input
 * @src: control input
 * @n: control input
 *
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length_dest, length_src, i;

	length_dest = _strlen(dest);
	length_src = _strlen(src);

	for (i = 0; i <= _min(length_src, n); i++)
	{
		*(dest + i + length_dest) = *(src + i);
	}
	return (dest);
}
