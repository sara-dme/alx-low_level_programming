#include "lists.h"

/**
 * free_listint - frees  a list
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *lst;

	while (head)
	{
		lst = head;
		head = head->next;
		free(lst);
	}
}
