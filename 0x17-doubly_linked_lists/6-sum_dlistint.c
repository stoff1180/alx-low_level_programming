#include "lists.h"

/**
 * sum_dlistint - Sums up the `n` data of each node in a dlistint_t list
 * @head: A pointer to the head of the linked list
 * Return: The sum of the `n` data or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
