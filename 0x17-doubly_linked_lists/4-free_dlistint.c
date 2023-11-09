#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: A pointer to the head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	for (; head; head = node)
	{
		head = head->next;
		free(node);
	}
}
