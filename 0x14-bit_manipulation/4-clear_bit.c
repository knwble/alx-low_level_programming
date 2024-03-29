#include "main.h"

/**
 * clear_bit - a function that sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 * Return: 1 on success
 *         otherwise -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
