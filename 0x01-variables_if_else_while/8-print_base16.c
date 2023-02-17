#include<stdio.h>
#include <stdlib.h>



/**
* main - program that prints all the numbers of base 16 in lowercase
* Return: Always 0 (Success)
*/


int main(void)
{

	int y, x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
