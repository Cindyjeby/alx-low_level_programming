#include "lists.h"
/**
 * free_listint_safe - frees a list
 * @h: pointes to the first node to the linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t j = 0;
	int k;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		k = *h - (*h)->next;
		if (k > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			j++;
		}
		else
		{
			free(*h);
			*h = NULL;
			j++;
			break;
		}
	}
	*h = NULL;
	return (j);
}
