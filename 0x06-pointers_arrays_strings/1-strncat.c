#include "main.h"

/**
 * _strncat - function that concatenates two stringst
 * @dest: destination variable
 * @src: source variable
 * @n: most number of bytes from @src
 * Return: Always 0 (success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
