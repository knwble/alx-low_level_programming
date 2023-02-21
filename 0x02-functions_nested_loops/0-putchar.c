#include "main.h"

/**
 * main - Entry point
 *
 * Description: A program that prints _putchar, followed by a new line
 *
 * Return: nothing, return void
 */

int main(void)
{

	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
