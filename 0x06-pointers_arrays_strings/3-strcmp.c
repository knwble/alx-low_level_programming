#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: A pointer to a character that will be changed
 * @s2: A pointer to a character that will also be changed/modified/updated
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
