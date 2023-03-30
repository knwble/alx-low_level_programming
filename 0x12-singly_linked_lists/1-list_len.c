#include "lists.h"

/**
 * list_len - Finds the number of elements in
 *            a linked list_t list.
 * @h: The linked list_t list.
 * Return: The number of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t node = 1;

	/*if head is null return 0 nodes*/
	if (h == NULL)
		return (0);

	/*iterate through the nodes*/
	while (h->next != NULL)
	{
		/*go to the next node*/
		h = h->next;
		/*count number of nodes*/
		node += 1;
	}

	return (node);
}
