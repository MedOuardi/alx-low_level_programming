#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all alphabet in lowercase except q and e
 *
 * Return: (0)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
