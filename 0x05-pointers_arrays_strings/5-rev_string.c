#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/
void rev_string(char *s)
{
	char *start_c, *end_c, c;
	int count = 0, i;

	/*find string length without null char*/
	for (i = 0; s[i] != '\0'; i++)
	count++;

	start_c = s;
	end_c = s;

	for (i = 0; i < count - 1; i++)
	end_c++;

	for (i = 0; i < count / 2; i++)
	{
		c = *end_c;
		*end_c = *start_c;
		*start_c = c;

		start_c++;
		end_c--;
	}
}
