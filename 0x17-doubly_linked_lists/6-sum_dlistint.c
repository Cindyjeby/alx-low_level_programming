#include "lists.h"
/**
 * sum_dlistint - function that returns the sum f all the data in the list
 * @head: is the pointer to the head of the list
 * Return: 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
