#include "main.h"

/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: integer
 *@y: integer
 *Return: the value of x raised to y
 */

int _pow_recursion(int x, int y)
{
	int even;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y % 2 == 0) /*if y is an even number*/
	{
		even = _pow_recursion(x, y / 2);
		return (even * even);
	}
	else /*if y is odd*/
		return (x * _pow_recursion(x, y - 1));
}
