#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a list
 * @head: head of a list
 * @n: node to add
 * Return: the adress of the new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	h = *head;
	new->next = h;

	if (h != NULL)
		h->prev = new;
	*head = new;
	return (new);
}
