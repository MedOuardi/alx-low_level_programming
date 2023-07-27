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
 * _min - fonction that return minimum of two numbers
 *
 * @a: control input
 * @b: control input
 * @c: control input
 *
 * Return: minimum
 */

int _min(int a, int b, int c)
{
	int min = a;

	if (b < min )
		min = b;
	if (c < min)
		min = c;
	return (min);
}


/**
 * _strncpy - function that prints a string,
 *		in reverse, followed by a new line.
 *
 * @dest: control input
 * @src: control input
 * @n: control input
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length_dest, length_src, i;

	length_dest = _strlen(dest);
	length_src = _strlen(src);

	for (i = 0; i < _min(length_src, n, length_dest); i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + length_dest) = '\0';
	return (dest);
}
