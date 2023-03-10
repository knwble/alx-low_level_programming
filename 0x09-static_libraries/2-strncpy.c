#include "main.h"

/**
 * _strncpy - function that concatenates two stringst
 * @dest: destination variable
 * @src: source variable
 * @n: variable to hold the limit to which src get copied
 * Return: Always 0 (success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
