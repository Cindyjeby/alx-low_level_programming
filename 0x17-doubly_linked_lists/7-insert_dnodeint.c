#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a node at a given point
 * @idx: idex of the new node
 * @h: pointer to the header
 * @n: node to be added
 * Return: address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *node = *h;
	unsigned int k = 0;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = new;
		new->next = *h;
		*h = new;
	}
	while (k < idx - 1)
	{
		if (!node)
			return (NULL);
		node = node->next;
		k++;
	}
	if (!node)
		return (NULL);
	new->next = node->next;
	new->prev = node;
	if (node->next == new)
		node->next->prev = new;
	node->next = new;
	return (new);
}
