#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: a pointer to the bit to change
 * @index: The index to set the value at - indices start at 0
 *
 * Return: on sucess 1
 *         Otherwise - -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n ^= (1 << index);
	return (1);
}
