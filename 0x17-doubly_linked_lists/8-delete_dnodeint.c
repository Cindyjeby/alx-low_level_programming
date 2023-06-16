#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index of list
 * @head: pointer to the head
 * @index: index of node to be deleted
 * Return: 1 (success), -1 (failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete;
	unsigned int value = 0;

	if (*head == NULL)
		return (-1);
	delete = *head;

	if (index == 0)
	{
		*head = delete->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(delete);
	return (1);
	}
	while (delete != NULL && value < index)
	{
		delete = delete->next;
		value++;
	}
	if (!delete)
		return (-1);
	if (delete->next != NULL)
		delete->next->prev = delete->prev;
	if (delete->prev != NULL)
		delete->prev->next = delete->next;
	free(delete);
	return (1);
}
