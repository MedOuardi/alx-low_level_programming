#include "main.h"
/**
 * print_array - function that prints a string,
 *		in reverse, followed by a new line.
 *
 * @a: control input
 * @n: control input
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
	printf("\n");
}
