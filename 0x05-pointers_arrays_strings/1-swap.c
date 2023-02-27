include "main.h"


/**
 * swap_int - Entry point
 * @a: The variable to take input.
 * @b: The variable to take input.
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
