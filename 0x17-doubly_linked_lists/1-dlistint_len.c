#include "lists.h"

/**
 * dlistint_len - number of elements in linked list
 * @h: head in the list
 * Return: len of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *curr = h;

	while (curr != NULL)
	{
		num++;
		curr = curr->next;
	}
	return (num);
}
