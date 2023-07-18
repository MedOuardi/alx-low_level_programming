#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: check input
 *
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
