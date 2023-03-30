#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t node = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		/*go to the next node*/
		h = h->next;
		/*count number of nodes*/
		node += 1;
	}

	/*print for the last node*/
	printf("[%d] %s\n", h->len, h->str);

	return (node);
}
