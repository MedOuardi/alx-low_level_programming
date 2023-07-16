#include <unistd.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * This program prints "Programming is like building a multilingual puzzle"
 * Return: 0 (success)
*/
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, str, 59);
	return (1);
}
