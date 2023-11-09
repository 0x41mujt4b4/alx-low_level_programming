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

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
