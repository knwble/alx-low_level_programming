#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 * Return: The number of bytes in s which
 *         consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		count = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count = 0;
				break;
			}
			j++;
		}
		if (count == 1)
			break;
		i++;
	}

	return (i);
}
