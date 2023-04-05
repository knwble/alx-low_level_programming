#include "lists.h"

/**
 * print_listint_safe -  a function that prints a listint_t linked list.
 * @head: a pointer to thhe first element of list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 1;
	long int node_diff;

	while (head)
	{
		node_diff = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		node_count += 1;
		if (node_diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (node_count);
}
