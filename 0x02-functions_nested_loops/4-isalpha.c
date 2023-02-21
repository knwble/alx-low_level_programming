#include "main.h"

/**
* _isalpha - Entry point
* @c: The character to take input.
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately
*/


int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);

}
