#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	int i = 0, l = 0;
	char *string;

	if (str == NULL)
		return (NULL);

	/*calculate size of str*/
	while (str[l] != '\0')
		l++;

	string = malloc((l + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		string[i] = str[i];
		i++;
	}

	return (string);
}
