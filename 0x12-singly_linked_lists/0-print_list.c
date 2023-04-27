#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: list to be printed
 * Return: size
 */
size_t print_list(const list_t *h)
{
	size_t sz = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");
		else
		printf("[%d] %s\n", h->len, h->str);
		sz++;
		h = h->next;
	}
	return (sz);
}
