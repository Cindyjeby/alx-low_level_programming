#include "lists.h"
/**
 * free_dlistint - function that frees a list
 * @head: a ponter to head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *first = head;
	dlistint_t *next;

	while (first != NULL)
	{
		next = first->next;
		free(first);
		first = next;
	}
}
