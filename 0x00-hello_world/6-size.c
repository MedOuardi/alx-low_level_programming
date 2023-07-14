#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * This program prints "Programming is like building a multilingual puzzle"
 * Return: 0 (success)
*/
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
