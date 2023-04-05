#include "lists.h"

/**
 * delete_nodeint_at_index - functio that deletes the node at a given
 *                           index of a list.
 * @head: A pointer to the address of the
 *         head of the list
 * @index: The index of the node to be deleted
 *
 * Return: success (1)
 *         fail (-1)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current = *head;
	unsigned int ind;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);

		return (1);
	}

	for (ind = 0; ind < (index - 1); ind++)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
