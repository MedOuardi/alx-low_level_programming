#include "main.h"

/**
 * reverse_array _ function that reverses the content of an array of integers.
 *
 * @a: control input
 * @b: control input
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1;
	int temp;

	while (i < j)
	{
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
		i++;
		j--;
	}

}
