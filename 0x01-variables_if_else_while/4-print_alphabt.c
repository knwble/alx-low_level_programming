#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the alphabet in lowercase, followed by a new line.
* Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			++ch;
		putchar(ch);
		++ch;
	}
	putchar('\n');
return (0);
}
