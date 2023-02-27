#include "main.h"


/**
* rev_string - reverses a string
* @s: string to reverse
* Return: void
*/

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
