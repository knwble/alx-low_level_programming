#include "main.h"

/**
 *get_endianness - a function that checks for endianness
 * Return: 0 if big endian
 *	   1 if little endian
 */
int get_endianness(void)
{
	unsigned int b = 1;
	char *a = (char *)&b;

	if (*a)
		return (1);

	return (0);
}
