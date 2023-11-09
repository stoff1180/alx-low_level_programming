#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t linked list
 * @h: A pointer to the head of the linked list
 * Return: The number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
