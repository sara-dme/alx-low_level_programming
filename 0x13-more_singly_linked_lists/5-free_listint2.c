#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *lst;

	if (head == NULL)
		return;
	while (*head)
	{
		lst = *head;
		*head = (*head)->next;
		free(lst);
	}
	*head = NULL;
}
