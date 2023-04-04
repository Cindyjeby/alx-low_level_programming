#include "lists.h"
/**
 * get_nodeint_at_index - returns a node of a linked list
 * @head: pointer to first node of linked list
 * @index: index of node to be returned
 * Return: pointer to the node being looked for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
