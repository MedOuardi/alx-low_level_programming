#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all alphabet in lowercase
 *
 * Return: (0)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
