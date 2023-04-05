#include "lists.h"

/**
 * get_nodeint_at_index - locate a given node at *index nth from a linked list
 * @head: pointer to the head of the list
 * @index: the index of the node to locate
 *
 * Return: node at nth index OR NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
