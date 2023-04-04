#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to be searched
 * Return: addres og the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i = head;
	listint_t *k = head;

	if (!head)
		return (NULL);
	while (i && k && k->next)
	{
		k = k->next->next;
		i = i->next;
		if (k == i)
		{
			i == head;
			while (i != k)
			{
				i = i->next;
				k = k->next;
			}
			return (k);
		}
	}
}
