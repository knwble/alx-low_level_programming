#include <stdio.h>
#include <stdlib.h>

/**
* main - print all possible different
* combinations of two digits.
* Return: Always 0 (Success)
*/

int main(void)
{

	int i, k, j;

	for (k = '0'; k < '9'; ++k)
	{
	for (i = k; i < '8'; ++i)
	{
	for (j = i; j <= '7'; j++)
	{
		putchar(k);
		putchar(i + 1);
		putchar(j + 2);
		if (k < '7')
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
