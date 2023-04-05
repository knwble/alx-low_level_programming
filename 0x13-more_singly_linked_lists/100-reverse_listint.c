#include "lists.h"

/**
 * reverse_listint -  a function that reverses a listint_t linked list.
 * @head: pointer to the first node in the linked list
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *next_node, *prev;

	prev = NULL;
	next_node = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);


	while ((*head)->next != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next_node;
	}
	(*head)->next = prev;

	return (*head);
}
