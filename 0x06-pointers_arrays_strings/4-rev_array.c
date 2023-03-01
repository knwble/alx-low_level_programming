#include "main.h"

/**
 * reverse_array - A function to reverse the array given
 * @a: the variable having the array
 * @n: the variable storing the size of the array
 * Return: it returns void.
 */

void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1;
	while(s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
