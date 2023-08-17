#include "lists.h"

/**
* add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
* @head: A pointer to the head of the dlistint_t list.
* @n: The integer for the new node to contain.
* Return: If the function fails - NULL.
*         Otherwise - the address of the new node.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		perror("Error: Malloc failed.\n");
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head)
	{
		(*head)->prev = new_node;
		new_node->next = (*head);
	}
	(*head) = new_node;
	return ((*head));
}

