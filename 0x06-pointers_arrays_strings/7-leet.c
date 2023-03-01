#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 * @s: input string.
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	int i, c = 0;
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};


	while (s[c] != '\0')
	{

		for (i = 0; i < 5; i++)
		{
			if (s[c] == sl[i] || s[c] == ul[i])
			{
				s[c] = n[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
