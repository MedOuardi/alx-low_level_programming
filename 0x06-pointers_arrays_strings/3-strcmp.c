#include "main.h"

/**
 * _strcmp -  function that compares two strings.
 *
 * @s1: control input
 * @s2: control input
 *
 * Return: 0 if the same strings 's1' - 's2' otherwise
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return ((int)*s1 - (int)*s2);
		s1++;
		s2++;
	}
	return (0);
}
