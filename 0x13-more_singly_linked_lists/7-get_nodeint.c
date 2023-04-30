#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: list
 * @index: index of the node
 * Return: NULL or the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *lst = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head->next; i++)
	{
		if (i == index)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
