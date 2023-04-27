#include "lists.h"

/**
 * free_list - frees a list
 * @head: list to free
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if(head == NULL)
		return;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
