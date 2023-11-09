#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given posit in a dlist
 * @h: A pointer to a pointer to the head of the linked list
 * @idx: The index where the new node should be added
 * @n: The value to be stored in the new node
 * Return: Address of the new element or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newnode;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next->prev = newnode;
	temp->next = newnode;
	return (newnode);
}
