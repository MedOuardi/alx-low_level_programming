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
 * _strcat - function that prints a string,
 *		in reverse, followed by a new line.
 *
 * @dest: control input
 * @src: control input
 *
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int length_dest, length_src, i;

	length_dest = _strlen(dest);
	lengtg_src = _strlen(src);

	for (i = 0; i <= length_src; i++)
	{
		*(dest + i + length_dest) = *(src + i)
	}
	return (dest);
}
