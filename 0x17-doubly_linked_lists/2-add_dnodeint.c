#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add node into linked list
 *
 * @head: the linked list
 * @n: the value of the node
 *
 * Return: number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h = *head;

	new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
	new->n = n;
	h->prev = new;
	new->next = h;
	new->prev = NULL;
	h = new;
	return (h);
}
