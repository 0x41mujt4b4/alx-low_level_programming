#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - return len of linked list
 *
 * @h: the linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
