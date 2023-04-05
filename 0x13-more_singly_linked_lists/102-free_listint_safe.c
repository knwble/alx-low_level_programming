#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t num_freed = 0;
	int node_diff;
	listint_t *current_node, *next_node;

	if (!h || !(*h))
		return 0;

	current_node = *h;
	
	while (current_node != NULL)
	{
		node_diff = current_node - current_node->next;
		if (node_diff > 0)
		{
			next_node = current_node->next;
			free(current_node);
			current_node = next_node;
			num_freed++;
		}
		else
		{
			free(current_node);
			current_node = NULL;
			num_freed++;
			break;
		}
	}

	*h = NULL;
	return (num_freed);

}

