#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: first adr
 * @str: string to be duplicated
 * Return: adr of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *lst;

	if (head == NULL && str == NULL)
		return (NULL);
	lst = malloc(sizeof(list_t));
	if (lst == NULL)
	{
		free(lst);
		return (NULL);
	}
	lst->str = strdup(str);
	if (lst->str == NULL)
	{
		free(lst);
		return (NULL);
	}
	lst->len = strlen(lst->str);
	lst->next = *head;
	*head = lst;
	return (lst);
}
