#include "main.h"

/**
 * _print_rev_recursion - uses recursion to print strings and a new line
 * @s: the string to be printed in reverse.
 * Return: returns (0) on success.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
