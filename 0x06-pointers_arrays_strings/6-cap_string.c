#include "main.h"

/**
 * is_separator - verify if char is seperator
 *
 * @c: control input
 *
 * Return: 1 if seperator 0 otherwise
 */

int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i = 0;

	while (i <= 12)
	{
		if (c == separators[i])
			return (1);
		i++;
	}
	return (0);
}
/**
 * is_lower - functio that verify is char in lowercase
 *
 * @c: control input
 *
 * Return: 1 if lower 0 otherwhise
 */

int is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * cap_string -  function that capitalizes all words of a string.
 *
 * @str: control input
 *
 * Return: String
 */

char *cap_string(char *str)
{
	int separator_found = 1;
	char *cpy = str;

	while (*str)
	{
		if (is_separator(*str))
		{
			separator_found = 1;
		}
		else if (is_lower(*str) && separator_found)
		{
			*str -= 32;
			separator_found = 0;
		}
		else
			separator_found = 0;
		str++;
	}
	return (cpy);

}
