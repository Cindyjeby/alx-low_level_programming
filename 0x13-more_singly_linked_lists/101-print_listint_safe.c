#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - counts the number of nodes in a looped linked list
 * @head: pointer to the list to be checked
 * Return: 0, if the list is not looped
 * Otherwise - number of nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *i, *k;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	i = head->next;
	k = (head->next)->next;

	while (k)
	{
		if (i == k)
		{
			i = head;
			while (i != k)
			{
				n++;
				k = k->next;
				i = i->next;
			}
			i = i->next;
			while (i != k)
			{
				n++;
				i = i->next;
			}
			return (n);
		}
			i = i->next;
			k = (k->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - Prints a listint_t list safely
 * @head: A pointer to the head of the listint_t list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, index = 0;

	n = looped_listint_len(head);

	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < n; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (n);
}
