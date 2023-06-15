#include "lists.h"
/**
 * print_dlistint_t - function that prints all elements of a list
 * @h: Pointer to the head of the list
 * Return: num of nodes in the list
 */
size_t print_dlistint_t(const dlistint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
