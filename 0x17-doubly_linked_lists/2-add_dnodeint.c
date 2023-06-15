#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the begining od a list
 * @head: double pointer to the head os a list
 * @n: number to be assigned to the new node
 * Return: the address of the new wlwment or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
