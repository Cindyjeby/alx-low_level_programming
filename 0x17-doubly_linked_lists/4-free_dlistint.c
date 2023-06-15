#include "lists.h"
/**
 * free_dlistint - function that frees a list
 * @head: a ponter to head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *k;

	while (head != NULL)
	{
		k = head;
		head = head->next;

		free(k);
	}
}
