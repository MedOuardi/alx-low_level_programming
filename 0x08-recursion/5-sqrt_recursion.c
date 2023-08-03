#include "main.h"

/**
 * square_root - a function that returns
 *			the natural square root of a number.
 *
 * @n: control input
 * @root: control input
 *
 * Return: square root of n -1 if n dont have root
 */

int square_root(int n, int root)
{
	if (root * root == n)
		return (root);
	else if (root * root < n)
		return (square_root(n, root + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - a function that returns
 *	the natural square root of a number
 * @n: control input
 *
 * Return: square root of n -1 if n dont have root
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
