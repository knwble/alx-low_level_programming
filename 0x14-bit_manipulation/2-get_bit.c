#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: The number to search
 * @index: The index to get the value at
 * Return: If an error occurs - -1
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
