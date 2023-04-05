#include "lists.h"

/**
 * pop_listint - deletes head of the node of linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the head's node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int first_node;

	if (!head || !*head)
		return (0);

	first_node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (first_node);
}
