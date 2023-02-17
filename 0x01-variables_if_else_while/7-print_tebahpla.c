#include <stdio.h>
#include <stdlib.h>



/**
* main - prints the lowercase alphabet in reverse, followed by a new line.
*  Return: Always 0 (Success)
*/


int main(void)
{

	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
