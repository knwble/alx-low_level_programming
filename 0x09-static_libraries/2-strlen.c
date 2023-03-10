#include "main.h"


/**
 * _strlen -length of a string
 * @s: pointer to a string, parameter input
 * Return: length of string
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
