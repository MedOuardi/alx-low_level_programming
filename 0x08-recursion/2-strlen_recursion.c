#include "main.h"

/**
 * _strlen_recursion -  function that returns the length of a string.
 *
 * @s: control input
 *
 * Return: the length of s
 */

int _strlen_recursion(char *s)
{
	int strlen = 0;

	if (*s != '\0')
		strlen += _strlen_recursion(s + 1) + 1;
	return (strlen);
}
