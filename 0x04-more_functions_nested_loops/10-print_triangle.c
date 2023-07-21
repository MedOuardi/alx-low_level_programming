#include "main.h"

/**
 * print_triangle - a function that prints a triangle,
 *		followed by a new line.
 * @size: check input and is the size of the triangle.
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = size; j >= 0; j--)
		{
			if (j < i)
				_putchar(' ');
			else
				_putchar('#');
		}
	}
}
