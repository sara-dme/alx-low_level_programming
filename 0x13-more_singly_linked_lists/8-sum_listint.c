#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n)
 * @head: linked list
 * Return: sum of all data n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
