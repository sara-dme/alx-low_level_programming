#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: adr
 * @str: string
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lst;
	list_t *tmp;

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
		return(NULL);
	}
	lst->len = strlen(lst->str);
	lst->next = NULL;
	if (*head == NULL)
	{
		*head = lst;
		return (lst);
	}
	else
	{
		tmp = *head;
		while(tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = lst;
	}
	return (lst);
}
