#include <stdio.h>

/**
 * main - A C program that prints the size of various types
 *
 * Return: 0 (Success)
*/

int main(void)
{

	char charType;
	int intType;
	long int longInt;
	long long int longLongInt;
	float floatType;

	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longLongInt));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType));
	return (0);

}
