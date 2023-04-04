#include "lists.h"
/**
 * sum_listint - return the sum of all the data in the linked list
 * @head: first node in the linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *temp = head;

	while (temp)
	{
		i += temp->n;
		temp = temp->next;
	}
	return (i);
}
