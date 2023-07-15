#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all alphabet in lowercase then in upperspace
 *
 * Return: (0)
*/

int main(void)
{
	char ch = 'a';
	char cha = 'A';

	/*Lowercase*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*Uppercase*/
	while (cha <= 'z')
	{
		putchar(cha);
		cha++;
	}
	putchar('\n');
	return (0);
}
