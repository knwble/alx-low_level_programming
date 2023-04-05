#include "lists.h"

/**
 * free_listint - free lnked ist
 * @head: pointer to the head of the linked list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
