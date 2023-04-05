#include "lists.h"

/**
 * insert_nodeint_at_index - function tat inserts a new node to a linked list
 *                           at a given position.
 * @head: pointer to the address of the
 *        head of the linked list.
 * @idx: index of the list where the new
 *       node should be added.
 * @n: The integer t be added
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int index;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}

	for (index = 0; index < (idx - 1); index++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
