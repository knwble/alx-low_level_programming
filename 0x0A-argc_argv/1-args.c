#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: the variable to hold the number of arguments
 * @argv: vector variable to hold the name of the arguments
 * Return: return success (0)
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
