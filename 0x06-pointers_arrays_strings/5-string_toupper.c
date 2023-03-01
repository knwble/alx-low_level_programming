#include "main.h"

/**
 * string_toupper - function to change strings to upper case
 * @str: variable to hold the string.
 * Return: Always 0 (success).
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

return (str);
}
