#include <stdio.h>
#include <stdlib.h>

/**
* main - programs that print in lower case then in upper case
* Return: Always 0 (Success)
*/

int main(void)

	{
		int x, y;

		for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
		putchar('\n');
		return (0);
	}
