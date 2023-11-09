#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 *
 * @head: the linked list
 * @n: the value of the node
 *
 * Return: number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	while (current->next)
		current = current->next;
	current->next = new;
	new->prev = current;
	current = new;
	return (new);
}
