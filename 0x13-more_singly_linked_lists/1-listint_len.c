#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to head of list
 * Return: size of the lst
 */
size_t listint_len(const listint_t *h)
{
	size_t sz = 0;

	while (h)
	{
		sz++;
		h = h->next;
	}
	return (sz);
}
