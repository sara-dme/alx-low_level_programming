#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: pointer to the list
 * @idx: index of the node to insert
 * @n: data to insert
 * Return: address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h, *new = NULL;
	unsigned int i = 0;

	if (idx == 0)
		new = add_dnodeint(h, n);
	while ( head != NULL)
	{
		if (i == idx - 1)
		{
			if (head->next == NULL)
				new = add_dnodeint_end(h, n);
			else
			{
				new = malloc(sizeof(dlistint_t));
				if (new != NULL)
				{
					new->n = n;
					new->next = head->next;
					new->prev = head;
					head->next = new;
					new->next->prev = new;
				}
			}
		}
		head = head->next;
		i++;
	}
	return (new);
}
