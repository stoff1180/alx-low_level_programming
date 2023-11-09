#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at a given index of a dlist
 * @head: A pointer to the head of the linked list
 * @index: The index of the node to retrieve
 * Return: The node at the specified index or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head)
	{
		if (j == index)
			return (head);
		head = head->next;
		j++;
	}
	return (NULL);
}
