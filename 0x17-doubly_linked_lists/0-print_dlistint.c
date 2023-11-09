#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all elements of a list
 * @h: Pointer to a list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
