#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: structure list
 * Return: the num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t sz = 0;

	while (h)
	{
		printf("%d\n", h->n);
			sz++;
			h = h->next;
	}
	return (sz);
}
