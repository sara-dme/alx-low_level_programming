#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: pointer
 * @n: num to add
 * Return: the adr to the new elem or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lst;

	lst = malloc(sizeof(listint_t));
	if (lst == NULL)
	{
		free(lst);
		return (NULL);
	}
	lst->n = n;
	lst->next = *head;
	*head = lst;

	return (lst);
}
