#include "main.h"


/**
* _puts - print a string
* @str: The variable to take input.
* Return: Always 0 (Success)
*/


void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	_putchar(str[i]);

	_putchar('\n');
}
