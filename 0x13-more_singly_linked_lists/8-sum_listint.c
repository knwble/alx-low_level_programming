#include "lists.h"

/**
 * sum_listint - function that calculates  the sum of all the data (n)
 *              of a linked list.
 * @head: pointer to the head of the linked list
 *
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{

		sum += head->n;
		head = head->next;
	}

	return (sum);
}
