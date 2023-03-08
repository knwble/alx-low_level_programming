#include "main.h"

/**
 * factorial - uses recursion to print strings and a new line
 * @n: the nth factorial to be printed.
 * Return: factorial of @n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
