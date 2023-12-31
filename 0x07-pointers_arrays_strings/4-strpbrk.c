#include "main.h"

/**
 * _strpbrk -  a function that searches a string
 *		for any of a set of bytes.
 * @s: control input
 * @accept: control input
 *
 * Return: a pointer to the byte in s that matches
 *		one of the bytes in accept
 *		or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
