#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head of a list
 * @index: index of the node
 * Return: node of a list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
