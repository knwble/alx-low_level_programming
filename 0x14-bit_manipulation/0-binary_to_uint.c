#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to unsigned int
 * @b: string containing the binary number to be converted
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{

	int index;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		result = 2 * result + (b[index] - '0');
	}

	return (result);
}
