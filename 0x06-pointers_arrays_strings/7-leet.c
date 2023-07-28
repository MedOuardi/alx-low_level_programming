#include "main.h"


/**
 * leet -  function that encodes a string into 1337.
 *
 * @c: check input
 *
 * Return: char
 */

char *leet(char *c)
{
	char *cpy = c;
	char Letters[] = "AEOTL";
	int codes[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < 5; i++)
		{
			if (*c == Letters[i] || *c == Letters[i] + 32)
				*c = '0' + codes[i];
		}
		c++;
	}
	return (cpy);
}
