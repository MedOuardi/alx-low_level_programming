#include "main.h"

/**
 * _strchr -  function that locates a character in a string.
 *
 * @s: string
 * @c: the first occurrence of the character
 *
 * Return:  a pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return ('\0');
}
