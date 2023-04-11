#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you
 *		would need to flip to get from one number to another
 * @n: first integer
 * @m: second integer
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int xor;

	count = 0;
	xor = n ^ m;
	while (xor > 0)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
