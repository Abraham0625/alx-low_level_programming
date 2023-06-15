#include "lists.h"

/**
 * sum_dlistint - sum of all nodes of doubly linkedlist
 * @head: doubly linkedlist
 * Return: return the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int abraham = 0;

	if (!head)
		return (0);

	while (head)
	{
		abraham += head->n;
		head = head->next;
	}

	return (abraham);
}
