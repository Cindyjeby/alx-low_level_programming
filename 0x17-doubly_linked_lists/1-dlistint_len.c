#include "lists.h"
/**
 * dlistint_len - function that returns the num of elements in a list
 * @h: pointer to the header
 * Return: num of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
