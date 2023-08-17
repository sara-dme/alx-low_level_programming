#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head of the list
 * @n: data to insert in the new node
 * Return: address of the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tail = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (tail->next)
		tail = tail->next;
	tail->next = new;
	new->prev = tail;
	return (new);
}
