#include "main.h"

/**
 * 
 * _memcpy - unction that fills memory with a constant byte.
 *
 * @dest: pointer to the memory area
 * @src: the constant byte
 * @n: unsigned int
 *
 * Return:  a pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
