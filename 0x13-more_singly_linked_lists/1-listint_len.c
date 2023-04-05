#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to the first node of the list
 *
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{

	size_t nodes = 0;

	/*return 0 if h is NULL*/
	if (h == NULL)
		return (0);

	while (h)
	{
		nodes += 1;

		h = h->next;
	}

	return (nodes);
}
