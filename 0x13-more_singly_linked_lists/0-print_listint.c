#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list
 * @h: A pointer to the head of the list_t list
 *
 * Return: The number of nodes in the list_t list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	/* return 0 if h is null*/
	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		nodes += 1;
		h = h->next;
	}

	return (nodes);
}

