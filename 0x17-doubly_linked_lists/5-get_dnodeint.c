#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: is the ponter to the head
 * @index: index of the node starting form 0
 * Return: NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k = 0;

	if (head == NULL)
		return (NULL);
	while (head && k < index)
	{
		head = head->next;
		k++;
	}
	if (head)
		return (head);
	else
		return (NULL);
}
