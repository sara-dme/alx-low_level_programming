#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: linked list
 * Return: the head node’s data (n) or 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *lst;
	int n;

	if (head == NULL)
		return (0);
	if (*head)
	{
		lst = *head;
		*head = (*head)->next;
		n = lst->n;
		free(lst);
		return (n);
	}
	else
		return (0);
}
