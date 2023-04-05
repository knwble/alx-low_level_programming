#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: pointer to the first node in the list
 * @n: integer n to insert into new node
 *
 * Return: If the function fails - NULL
 *         otherwise - address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->n = n;
	*head = new_node;

	return (new_node);
}
