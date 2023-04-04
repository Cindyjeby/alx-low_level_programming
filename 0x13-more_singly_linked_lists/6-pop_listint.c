#include "lists.h"
/**
 * pop_listint - deletes the head of the node
 * @head: pointer to the first element to the linked list
 * Return: data in the deleted node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);
}
