#include "main.h"

/**
* print_triangle - Prints a triangle, using the character #.
* @size: The size of the triangle.
*/
void print_triangle(int size)
{
	int h, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (b = 1; b <= size; b++)
			{
				if ((h + b) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
