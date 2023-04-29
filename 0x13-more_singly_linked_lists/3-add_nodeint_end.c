#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to head of list
 * @n: int to add
 * Return: the adr of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lst;
	listint_t *last = *head;

	lst = malloc(sizeof(listint_t));
	if (lst == NULL)
	{
		free(lst);
		return (NULL);
	}
	lst->n = n;
	lst->next = NULL;
	if (*head == NULL)
		*head = lst;
	else
		{
			while (last->next)
				last = last->next;
		last->next = lst;
		}
	return (lst);
}
